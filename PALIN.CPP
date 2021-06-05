/*WAP to check number is palindrome or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,num,digit,rev=0;
cout<<"Enter any number:";
cin>>num;
n=num;
do
{
digit=num%10;
rev=rev*10+digit;
num=num/10;
}
while(num!=0);
cout<<"\nThe reverse number is:"<<rev;
if(n==rev)
cout<<"\nThe number is palindrome";
else
cout<<"\nThe number is not palindrome";
cout<<"\nMade by KUSH BHARGAV SAH"<<"\nXII-B";
getch();
}