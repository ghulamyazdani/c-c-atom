#include <iostream>
using namespace std;
int main()
{
  int flag=0,n;
  std::cout << "Enter the number " << '\n';
  std::cin >> n;
  for (size_t i = 1; i < n; i++)
  {
    for (size_t j = 2; j <= n/2; j++)
      {
        if (i%j==0)
          {
            //std::cout << "not a prime number" << '\n';
            flag++;
            break;
          }
      }
      if (flag==0&&i!=0)
        {
          std::cout << i << '\n';
        }
      }
return 0;
}
