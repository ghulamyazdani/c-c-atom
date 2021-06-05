/*WAP to find out vowels in a string*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char line[80];
int vow=0;
cout<<"Enter any line:";
gets(line);
for(int i=0;line[i]!='\0';++i)
{
switch(line[i])
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':++vow;
}
}
cout<<"\nThe total number of vowels in the given line is:"<<vow;
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}
