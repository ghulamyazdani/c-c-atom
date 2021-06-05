/*WAP to find out largest and smallest element in a array*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ele[50],n,i,s,l;
cout<<"How many elements you want? ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter element:"<<i+1<<":";
cin>>ele[i];
}
s=ele[0];
l=ele[0];
for(i=1;i<=n;i++)
{
if(ele[i]<s)
s=ele[i];
else if(ele[i]>l)
l=ele[i];
}
cout<<"\nLargest element:"<<l;
cout<<"\nSmallest element:"<<s;
cout<<"\nMade By Shaukat Raza "<<"\nXIth A";
getch();
}