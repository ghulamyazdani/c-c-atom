#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;

  char str='y';
  while (str=='y'||str=='Y') {
    std::cout << "Enter the year" << '\n';
    std::cin >> n;
  if((n%4==0&&n%100!=0)||(n%400==0))
  {
    std::cout << "Its a leap year" << '\n';
  }
  else
  {
    std::cout << "its not leap year" << '\n';
  }
  std::cout << "If you want to continue press Y else N" << '\n';
  std::cin >>str;
}
  return 0;
}
