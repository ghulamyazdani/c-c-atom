#include <iostream>
using namespace std;
int main() {
  int firstnum,secondnum,n,i,count;
  cout << "Enter first number" << '\n';
  cin >> firstnum;
  cout << "Enter second number" << '\n';
  cin >> secondnum;
  for(n=firstnum;n<=secondnum;n++)
    {
      count=0;
      for(i=2;i<=n/2;i++)
      {
        if(n%i==0)
        {
          count++;
          break;
        }
      }
      if (count==0&&n!=1) {
        cout << n << '\n';
      }
    }
  return 0;
}
