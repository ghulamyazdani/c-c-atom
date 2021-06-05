#include <iostream>
using namespace std;
int main()
{
  int count;
  cout <<"Enter number of rows";
  cin >>count;
  for (size_t i = 0; i < count; i++)
  {
    for (size_t j = 0; j <= i; j++)
    {
      cout << "*" ;
    }
    cout << '\n';
  }
  return 0;
}
