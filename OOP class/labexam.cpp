#include <iostream>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    int marks; // these variables can only be  manipulated by memmber function which uses these variables

public:
    void data(string name1, int rollno1) // here you can see variables are being used by these member function and they are bound together this is called encapsulation.
    {
        rollno = rollno1;
        name = name1;
    }
    void data(string name1, int rollno1, int marks1) // we are having function name same for this but paramters are now different that means this is overloading and using the feature of polymorphism.
    {
        rollno = rollno1;
        name = name1;
        marks = marks1;
    }

    void printdata()
    {
        cout << "Rollno:" << rollno << endl;
        cout << "Name:" << name << endl;
        cout << "Marks:" << marks << endl;
    }
};
int main()
{
    Student s;
    s.data("Ghulam Yazdani", 051);
    s.printdata();
    s.data("Ghulam Yazdani", 051, 99); // this is called polymorphism
    s.printdata();
    return 0;
}
