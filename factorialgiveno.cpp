#include <iostream>
using namespace std;
int fact(int a);
int main(int argc, char const *argv[])
{
  int x;
  std::cout << "Enter the number" << '\n';
  std::cin >>x ;
  argc=fact(x);
  std::cout << argc << '\n';
  return 0;
}
int fact(int a)
{
  int count=1,temp=a;
  for (int i=1;i<=temp; i++)
  {
    count=count*a;
    //a=a*i;
    a--;
  }
  return count;
  //return a;
}
