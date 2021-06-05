#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct vrecord
{
int id_no;
char name[20];
char address[20];
int age;
}
v[20];
void disp(vrecord v[]);
void main()
{
clrscr();
for(int i=0;i<20;i++)
{
cout<<"\nEnter id_no of voter.\n";
cin>>v[i].id_no;
cout<<"\nEnter the name of voter.\n";
gets(v[i].name);
cout<<"\nEnter the address of voter.\n";
gets(v[i].address);
cout<<"\nEnter the age of voter.\n";
cin>>v[i].age;
}
disp(v);
getch();
}
void disp(vrecord v[])
{
cout<<"\nDetails of voters whoose age exceeds 60 are:-\n";
for(int i=0;i<20;i++)
{
if(v[i].age>60)
{
cout<<v[i].id_no<<"\n"<<v[i].name<<"\n";
cout<<v[i].address<<"\n"<<v[i].age<<"\n";
}
}
}
