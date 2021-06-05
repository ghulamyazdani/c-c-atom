#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,s;
for(i=1,j=0;i<5;++i,j=0)
{
for(s=1;s<=5-i;++s)
{
cout<<" ";
}
while(j!=2*i-1)
{
cout<<"*";
++j;
}
cout<<"\n";
}
getch();
}