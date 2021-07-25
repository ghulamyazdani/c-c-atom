#include <iostream.h>
#include <conio.h>
void BubbleSort(int a[],int n);
void main()
{
int A[20],N;
clrscr();
cout<<"\nEnter no. of elements:";
cin>>N;
cout<<"\n Enter the elements:";
for(int i=0;i<N;i++)
cin>>A[i];
BubbleSort(A,N);
getch();
}
void BubbleSort(int a[], int n)
{
int temp;
for(int i=1;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]= temp;
}
}
cout<<"\nAfter Pass:"<<i<<endl;
for(int k=0;k<n;k++)
cout<<a[k]<<"\t";
}
cout<<"\n";
}

