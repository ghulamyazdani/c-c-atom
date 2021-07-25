#include<iostream>
using namespace std;
int SelectionSort(int *,int);
int main(int argc, char const *argv[])
{
    int arr[20],num;
    cout<<"Enter Number of elem array";
    cin>>num;
    cout<<"Enter al the elements of the array";
    for (size_t i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    SelectionSort(arr,num);
    return 0;
}
int SelectionSort(int a[],int n)
{ 
    int small,pos,temp;
    for (size_t i = 0; i < n; i++)
    {
        small = a[i];
        pos=i;
        for (size_t j = i+1; j < n; j++)
        {
            if (a[j] < small)
            {
                small=a[j];
                pos=j;
            }
            
        }
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;  
      
        cout<<"array after pass ";
        for (size_t i = 0; i < n; i++)
         {
            cout<<a[i]<<"\t";
         }
    }
    
     return 0;
}