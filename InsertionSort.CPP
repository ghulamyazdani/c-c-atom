#include<iostream>
#include<conio.h>
using namespace std;
void InsertionSort(int a[], int n);
int main()
{
int list[20],N;
cout<<"Enter the elements:";
cin>>N;
cout<<"\n Enter the elements:";
for(int i=0;i<N;i++)
cin>>list[i];
InsertionSort(list, N);

return 0;
}
void InsertionSort(int list[],int n)
{
int i,k,j,temp;
for(i=1;i<n;i++)
{
temp=list[i];
j=i-1;
while((temp<list[j])&&(j>=0))
{
list[j+1]=list[j];
j--;
}
list[j+1]=temp;
cout<<"\n After Pass:"<<i<<endl;
for(k=0;k<n;k++)
cout<<list[k]<<"\t";
}
cout<<"\n";
}
