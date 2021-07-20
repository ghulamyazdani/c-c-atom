#include<iostream>
using namespace std;
int search(int [],int,int);
int main(int argc, char const *argv[])
{
    int A[20],N,count,index;
    cout<<"Enter the number of elements"<<"\n";
    cin>>count;

    cout<<"Enter all the elements of array"<<"\n";
    for (size_t i = 0; i < count; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter The key value(Number to be searched)"<<"\n";
    cin>>N;
    index=search(A,count,N);
    if (index==-1)
    {
        cout<<"Element not found";
    }
    else 
    {
        cout<<"Element found at index: "<<index<<" at position:"<<index+1;
    }
    

    return 0;
}
int search(int a[],int elem,int num){
    for (size_t i = 0; i < elem; i++)
    {
       if (a[i]==num)
       {
           return i;
       }
       
        
    }
    return -1;
}
