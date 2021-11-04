#include<iostream>
using namespace std;
class Student
{
    private:
        int rollno;
        string name;
        int marks;
    public:
        void getdata()
        {
            cout<<"Enter rollno,name,marks"<<endl;
            cin>>rollno>>name>>marks;
        }
        void putdata()
        {
            cout<<"Rollno:"<<rollno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Marks:"<<marks<<endl;
        }
};
int main()
{
    Student s;
    s.getdata();
    s.putdata();
    return 0;
}