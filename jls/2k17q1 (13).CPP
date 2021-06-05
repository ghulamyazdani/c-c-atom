/*WAP to print right alphabet triangle opposite*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
char ch='A';
for(i=1;i<=5;++i)
{
ch='A';
for(j=1;j<=i;++j)
{
cout<<" "<<ch;
ch++;
}
cout<<"\n";
}
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}
