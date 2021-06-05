#include <iostream>
using namespace std;
int add(int &a,int &b);
int main()
 {
   int x=20,y=10,n;
  //char ch[10]={"HELLO"};
  //cout << ch << '\n';
  n=add(x,y);
  cout<<n;
  return 0;
}
int add(int &a,int &b)
{ int temp;
  temp=a+b;
  return a+b;
}
