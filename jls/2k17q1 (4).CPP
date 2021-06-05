/*WAP to find out largest and smallest element in a array*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int large(int);
int arr[50],size,i;
cout<<"Enter size of array:";
cin>>size;
cout<<"\nLargest number:"<<large(size);
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}
int large(int s)
{
int arr[50],i,l;
cout<<"\nEnter array elements:";
for(i=0;i<s;i++)
{
cin>>arr[i];
}
l=arr[0];
for(i=0;i<s;i++)
{
if(l<arr[i])
{
l=arr[i];
}
}
return(l);
}
