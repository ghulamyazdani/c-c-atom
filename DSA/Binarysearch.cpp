#include<iostream>
using namespace std;
int BinarySearch(int *,int,int);
int main(int argc, char const *argv[])
{
    int a[20],end,num;
    
    cout<<"Enter Number Of Elements"<<"\n";
    cin>>end;
    

    cout<<"Enter sorted list";
    for (size_t i = 0; i < end; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Element to be searched";
    cin>>num;
    BinarySearch(a,end,num);
    return 0;
}
int BinarySearch(int arr[],int n,int val)
{
    int first=0,mid,count=0,last;
    last=n-1;
    while (count==0&&first<=last)
    {
        mid=(first+last)/2;
         if (arr[mid]==val)
    {
        cout<<"Elemt is at postion :"<<mid+1<<"and Index:"<<mid;
        count++;
        
    }
    else if (arr[mid]>val)
    {
        last=mid-1;

    }
    else if (arr[mid]<val)
    {
        first=mid+1;

    }
    }
}


