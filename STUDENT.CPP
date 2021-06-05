//Write a program for class student
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
int admno;
char sname[20];
float eng,math,science;
float total;
float ctotal()
{  return(eng+math+science);  }
public:
void takedata();
void showdata();
};
student total;
void student::takedata()
{
cout<<"\nEnter students admission no:"<<" "<<endl;
cin>>admno;
cout<<"\nEnter students name:"<<" "<<endl;
gets(sname);
cout<<"\nEnter english marks:"<<" "<<endl;
cin>>eng;
cout<<"\nEnter maths marks:"<<" "<<endl;
cin>>math;
cout<<"\nEnter science marks:"<<" "<<endl;
cin>>science;
total=ctotal();
}
void student::showdata()
{
clrscr();
cout<<"\nStudent details are:"<<endl;
cout<<"\nStudent admission no.:"<<" "<<admno;
cout<<"\nStudent name:"<<" "<<sname;
cout<<"\nEnglish marks:"<<" "<<eng;
cout<<"\nMaths marks:"<<" "<<math;
cout<<"\nScience marks:"<<" "<<science;
cout<<"\nTotal marks of student are:"<<" "<<total;
}
void main()
{
clrscr();
total.takedata();
total.showdata();
cout<<endl<<"Made By KUSH BHARGAV SAH,XII-B";
getch();
}