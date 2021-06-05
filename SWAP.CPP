/*WAP to swap to swap the value of two variablewithout using third variable    */


#include<iostream.h>
#include<conio.h>
void swap(int,int);
void main()
{                             clrscr();
	int a,b;
	cout<<"Enter Value Of 1st no.:";
	cin>>a;
	cout<<"Enter Value of 2nd no.:";
	cin>>b;
	cout<<"Before swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b;
	swap(a,b);
	cout<<"\nOutside function after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b; 
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside function after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b;
cout<<"\nMade By KUSH BHARGAV SAH"<<"\nXII-B";

getch();
}
 