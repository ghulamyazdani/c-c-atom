#include <iostream>
using namespace std;

class example
{
    public:
    int a=100;
};

int main()
{
    example obj;
    example* ptr;
    ptr = &obj;
    cout << ptr->a;
}
