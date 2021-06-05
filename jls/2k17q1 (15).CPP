/*WAP reads a string and converts it to uppercase include required headerfiles*/
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
clrscr();
char str[25];
int flag=1;
cout<<"Enter string:";
cin.getline(str,25);
for(int i=0;str[i]!=0;i++)
{
if(isupper(str[i]))
{
flag=0;
cout<<str[i]<<"\n Its already in upper case\n";
}
else if(islower(str[i]))
{
flag=1;
str[i]=toupper(str[i]);
}
}
if((flag==1)||(str[i]=='\0'))
{
cout<<"\n Upper case string";
int x1=strlen(str);
cout.write(str,x1);
}
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}