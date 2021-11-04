#include<iostream>
using namespace std;
// Encapsulation
// This is a programming style where implementation details are hidden. 
// It reduces software development complexity greatly. With Encapsulation, 
// only methods are exposed. The programmer does not have to worry about implementation details but is
//  only concerned with the operations. For example, if a developer wants to use a dynamic link library 
//  to display date and time, he does not have to worry about the codes in the date and time class rather he
//   would simply use the data and time class by using public variables to call it up.
class Student
{
    private:
        int rollno;
        string name;
        int marks;
    public:
        Student(int r,string n,int m)
        {
            rollno=r;
            name=n;
            marks=m;
        }
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
    Student s(10,"ghulamYazdani",100);
    // s.getdata();
    s.putdata();
    return 0;
}