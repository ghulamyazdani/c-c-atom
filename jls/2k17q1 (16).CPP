/*WAP user define function to swap two numbers by using call by value and call by refrence*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
void swap(int&,int&);
int a,b;
a=10;
b=20;
cout<<"Value of a="<<a<<" & b="<<b<<" before swap";
swap(a,b);
getch();
}
void swap(int&x,int&y)
{
int temp;
temp=x;
x=y;
y=temp;
cout<<"\nValue of a="<<x<<" & b="<<y<<" after swap";
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
}
