/*WAP to check whether a character is an alphabet or not and also checks its case*/
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
char ch;
cout<<"Enter any character:";
cin>>ch;
if(isalpha(ch))
{
if(islower(ch))
cout<<"\nLowercase Alphabet";
else if(isupper(ch))
cout<<"\nUppercase Alphabet";
}
else
cout<<"\nNot an alphabet";
cout<<"\nMade Of Shaukat Raza"<<"\nXIth A";
getch();
}
