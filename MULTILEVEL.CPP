#include<iostream.h>
#include<conio.h>
class student
{
protected:
int roll;
public:
void get_number(int a)
{
roll=a;
}
void put_number()
{
cout<<"\nRoll Number:"<<roll<<"\n";
}
};
class test:public student
{
protected:
float sub1;
float sub2;
public:
void get_marks(float x,float y)
{
sub1=x;
sub2=y;
}
void put_marks()
{
cout<<"\nMarks in Subject 1="<<sub1<<"\n";
cout<<"MArks in Subject 2="<<sub2<<"\n";
}
};
class result:public test
{
private:
float total;
public:
void display()
{
total=sub1+sub2;
put_number();
put_marks();
cout<<"Total="<<total<<"\n";
cout<<"\nBy KUSH BHARGAV SAH;XII-B";}
};
void main()
{
clrscr();
result student;
student.get_number(10);
student.get_marks(89.0,90.0);
student.display();
getch();
}
