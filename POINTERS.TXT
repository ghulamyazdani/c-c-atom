//REVERSE A STRING USING POINTERS
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char *str="sejal singh";
int len=strlen(str);
cout<<"\n\n Original Srting: "<<str;
cout<<"\n Reversed String: ";
     for(int i=len-0;i>=0;i--)
   {
      cout<<str[i];
   }
cout<<"\n\n By:  KUSH BHARGAV SAH \n XIIB ";
getch();
}