#include<iostream>
using namespace std;
//class to incorporate constructor in inheritance 
class Shape
{
public:
    int length = 10;
    Shape()
    {
        cout << "Shape constructor called" << endl;
    }
    void draw()
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
    Circle c;
    Rectangle r;
    Shape *s;
    c.draw();
    s = &r;
    s->draw();
    return 0;
}