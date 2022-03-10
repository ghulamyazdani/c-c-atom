#include<iostream>
using namespace std;
int BubbleSort(int *,int);
int main(int argc, char const *argv[])
{
    int arr[20],n;
    cout<<"Enter the size of the array";
    cin>>n;
    cout<<"Enetr the elements of the array";
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);

    return 0;
}
int BubbleSort(int a[],int num)
{
    int temp;
    for (size_t j = 1; j <num; j++)
    {
        for (size_t i = 0; i < num-j; i++)
        {
             if (a[i]>a[i+1])
             {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
             }
        }
    }

   cout<<"sorted array is ";
    for (size_t k = 0; k < num; k++)
   {
       cout<<a[k]<<"\n";
   }

}
