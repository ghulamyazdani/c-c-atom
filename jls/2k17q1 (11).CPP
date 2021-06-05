/*WAP GCD and LCM of two numbers using funtions*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int gcd(int x,int y)
{
int a,b,r=0;
a=(x>y)?x:y;
b=(x<y)?x:y;
r=b;
while(a%b!=0)
{
r=a%b;
a=b;
b=r;
}
return(r);
}
int lcm(int x,int y)
{
int a,true;
a=(x>y)?x:y;
while(true)
{
if(a%x==0&&a%y==0)
return(a);
++a;
}
}
void main(int a,char c)
{
clrscr();
int x,y;
cout<<"Enter First Integer:";
cin>>x;
cout<<"\nEnter Second Integer:";
cin>>y;
cout<<"\nThe GCD is:"<<gcd(x,y);
cout<<"\nThe LCM is:"<<lcm(x,y);
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}