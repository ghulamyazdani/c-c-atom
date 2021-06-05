/*WAP to search specific element in 1D array*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],size,i,flag=0,num,pos;
cout<<"Enter the number of array:";
cin>>size;
cout<<"\nEnter the elements of array:";
for(i=0;i<size;i++)
cin>>a[i];
cout<<"\nEnter the element for searched:";
cin>>num;
for(i=0;i<size;i++)
if(a[i]==num)
{
flag=1;
pos=i;
break;
}
if(flag==0)
cout<<"\n!!!Element not found!!!";
else
cout<<"\nElement found at position:"<<(pos+1);
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}