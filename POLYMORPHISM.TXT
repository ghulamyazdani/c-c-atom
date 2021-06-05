#include<iostream.h>
#include<conio.h>
void sum(int,int,int);
void sum(int,int);
void main()
{
clrscr();
int a,b,c,d;
cout<<"\n Enter the values for a,b,c,d:";
cin>>a>>b>>c>>d;
sum(a,b,c);
sum(d,c);
getch();
}
void sum(int a,int b,int c)
{
int s;
s= a+b+c;
cout<<endl<<"\n Sum="<<s;
}
void sum(int a,int b)
{
int s;
s=a+b;
cout<<endl<<"\n Sum="<<s;
cout<<"\nBy KUSH BHARGAV SAH;XII-B";
}
