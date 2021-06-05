#include<iostream.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  #include<iostream,h>
#include<conio.h>
void SelectionSort(int a[],int n);
void main()
{
int A[20],N;
clrscr();
cout<<"\n Enter the number of elements:";
cin>>N;
cout<<"\n Enter the elements:";
for(int i=0;i<N;i++)
cin>>A[i];
SelectionSort(A,N);
getch();
}
void SelectionSort(int a[],int n)
{
int i, small,pos,temp,j;
for(i=0;i<n;i++)
{
small=a[i];
pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]<small)
{
small=a[j];
pos=j;
}
}
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
cout<<"\n After Pass "<<i+1<<endl;
for(j=0;j<n;j++)
cout<<a[j]<<"\t";
}
cout<<"\n";
cout<<"\n By KUSH BHARGAV SAH;XII-B";
}

