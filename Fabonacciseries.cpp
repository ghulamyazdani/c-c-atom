#include <iostream>
void fab(int n);
using namespace std;
int main(int argc, char const *argv[])
{
  int y;
  std::cout << "Enter number " << '\n';
  std::cin >> y;
  fab(y);

  return 0;
}
void fab(int n)
{
  int first=0,sec=1,count;
  for (size_t i = 0; i < n; i++)
  {
  std::cout << first ;
   count =first+sec;
   first=sec;
   sec=count;

  }
}
