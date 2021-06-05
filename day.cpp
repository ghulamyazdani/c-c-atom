#include <iostream>
int day(int x);
using namespace std;
int main(int argc, char const *argv[])
 {
  char b[10];
  int a;
  std::cout << "Enter the day in number" << '\n';
  std::cin >>a;
  day(a);

  return 0;
}
int day(int x)
{
  switch (x)
   {
    case 1: std::cout << "monday" << '\n';
            break;
    case 2: std::cout << "tuesday" << '\n';
            break;
    case 3: std::cout << "wednesday" << '\n';
            break;
    case 4: std::cout << "thursaday" << '\n';
            break;
    case 5: std::cout << "friday" << '\n';
            break;
    case 6: std::cout << "saturday" << '\n';
            break;
    case 7: std::cout << "sunday" << '\n';
            break;
    default :std::cout << "invalid number" << '\n';
            break;
  }
  return 0;
}
