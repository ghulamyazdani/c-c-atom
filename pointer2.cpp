#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int b,*a;
  b=100;
  a=&b;
  
  std::cout << a << '\n';
  int **c;
  c=&a;
  std::cout << c << '\n';
  std::cout << &a << '\n';
  return 0;
}
