//program to demonstrate inheritance using oop concept
#include <iostream>
using namespace std;
class Shape
{
public:
    int length = 10;
    virtual void draw()
    {
        cout << "Shape drawn" << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle drawn" << endl;
    }
};
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Rectangle drawn" << endl;
    }
};
int main()
{
    Shape s1;
    s1.draw();
    Circle c1;
    c1.draw();
    Rectangle r1;
    r1.draw();
    cout << "Length of shape can be accessed from rectangle class " << r1.length << endl;
    return 0;
}

// Demonstrate same program using procedural programming

#include <iostream>
using namespace std;
void Shape(){
    int length = 10;
    cout << "Shape drawn" << endl;
}
void Circle(){
        cout << "Circle drawn" << endl;
}
void Rectangle()
{
    cout << "Rectangle drawn" << endl;
}
int main()
{
    Shape();
    Circle();
    Rectangle();
    cout << "You cant access Length of shape from another function " ;
    return 0;
}
