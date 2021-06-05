#include <iostream>
using namespace std;
int pow(int a,int b);
int main(int argc, char const *argv[]) {
  int x,y;
std::cout << "Enter the numbers" << '\n';
std::cin >> x>>y;
argc=pow(x,y);
std::cout << argc << '\n';
  return 0;
}
int pow(int a,int b)
{
  int count=1;
  for (size_t i = 1; i <= b; i++)
  {
    count=count*a;
  }
  return count;
}
