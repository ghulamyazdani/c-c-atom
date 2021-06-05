#include <iostream>
#include <stdio.h>
using namespace std;
int myfunction(string s);
int main(int argc, char const *argv[]) {
  string a;
  int n;
  cin>>n;
  for (size_t i = 0; i <n; i++) {
    cin>>a;
    myfunction(a);
  }

  return 0;
}
  int myfunction(string s)
  {
    for (size_t i = 0; i<=s.length(); i++)
     {
        if (i%2==0)
        {
        std::cout <<s[i];
        }
     }


     for (size_t i = 0; i <=s.length(); i++)
     {
       if (i%2!=0)
        {
         std::cout <<s[i];
       }

     }
     std::cout << '\n';
      return 0;
   }
