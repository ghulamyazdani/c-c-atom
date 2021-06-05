#include <iostream>
using namespace std;
class complex
{
int num1;
int num2;
int result;
public:
  void add()
  {
    std::cout << "Enter Numbers" << '\n';
    std::cin >> num1>>num2;
    std::cout << num1+num2 << '\n';
  }

};
