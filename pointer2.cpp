#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int b,*a;
  a=&b;
  b=100;
  std::cout << *a << '\n';
  int **c;
  c=&a;
  std::cout << c << '\n';
  std::cout << &a << '\n';
  return 0;
}
