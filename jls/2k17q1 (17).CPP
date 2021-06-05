/*WAP of function whether a given character is contained in a string or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int findpos(char s[],char c);
char string[80],ch;
int y=0;
cout<<"Enter main string:";
cin.getline(string,80);
cout<<"\nEnter character for searched :";
cin.get(ch);
y=findpos(string,ch);
if(y==-1)
cout<<"\n!!!Character is not in a string!!!";
getch();
}
int findpos(char s[],char c)
{
int flag=-1;
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==c)
{
flag=0;
cout<<"\nThe Character is in string at position:"<<i+1;
}
}
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
return(flag);
}