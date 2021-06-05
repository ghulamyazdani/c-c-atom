/*WAP to check if a string is palindrome or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char string[80],ch;
cout<<"Enter string:";
cin.getline(string,80);
for(int len=0;string[len]!='\0';len++)
{
int i,j,flag=1;
for(i=0,len-1;i<len/2;i++,j--)
{
if(string[i]!=string[j])
{
flag=0;
break;
}
}
if(flag!=0)
cout<<"\nIt is a palindrome";
else
cout<<"\nIts not a palindrome";
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}
}