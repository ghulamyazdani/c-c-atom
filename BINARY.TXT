#include <iostream.h>
#include <conio.h>
int binary_Search(int[],int,int);
int main()
{
int A[20],N,index,i,val;
clrscr();
cout<<"\nEnter the no of elements:";
cin>>N;
cout<<"\n Enter the elements:";
for(i=0;i<N;i++)
cin>>A[i];
cout<<"\n Enter element to be searched:";
cin>>val;
index=binary_Search(A,N,val);
if(index>-1)
cout<<"\n Element found at index:"<<index<<" and at position:"<<index+1;
else
cout<<"unsuccessful search";
cout<<"\n";
cout<<"\n By  KUSH BHARGAV SAH;XII-B";
getch();
return(0);
}
int binary_Search(int a[],int n,int val)
{
int low,mid,high,i,flag=0;
low=0;
high=n-1;
while((low<=high)&&(flag==0))
{
mid=(low+high)/2;
if (val==a[mid])
{
flag=mid;
return flag;
}
else if(val>a[mid])
low=mid+1;
else
high=mid-1;
}
return-1;
}