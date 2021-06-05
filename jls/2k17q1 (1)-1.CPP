/*WAP for following funtions:
1)sqlarge() that pass two arguments by refrence and its square?
2)sum() passed int arguments and returns its sum?
3)main() that exercise above two function by getting two integers from the user!*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
void sqlarge(int&,int&);
int sum(int);
int value1,value2,t;
cout<<"Enter a number:";
cin>>value1;
t=sum(value1);
cout<<"\nThe sum of digits:"<<t;
cout<<"\nEnter another number:";
cin>>value2;
cout<<"\nThe two number originally are:"<<value1<<" & "<<value2;
sqlarge(value1,value2);
cout<<"\nThe given number after change:"<<value1<<" & "<<value2;
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}
void sqlarge(int&a,int&b)
{
if(a>b)
a=a*a;
else
b=b*b;
}
int sum(int x)
{
int r,s=0;
while(x>0)
{
r=x%10;
s=s+r;
x=x/10;
}
return(s);
}
