#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int count;
  for (size_t x = 1; x <=100; x++)
  {
    count=0;
    for (size_t j = 2; j <= x/2; j++)
     {
       if(x%j==0)
       {
         count++;
         break;
       }
     }
     if (count==0)
     {
       std::cout << x << '\n';
     }
  }
return 0;
}
