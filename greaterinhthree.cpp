#include <iostream>
using namespace std;
int great(int a,int b,int c);
int main(int argc, char const *argv[])
{
  int x,y,z,t;
  cout <<"Enter X y z:" << '\n';
  cin>>x>>y>>z;
  t=great(x,y,z);
  cout <<t<< '\n';
  return 0;
}
int great(int a,int b,int c)
{
  int flag;
  if(a>b)
  {
    if(a>c)
    flag =0;
    else
    flag=3;
  }
  else
  {
    if (b>c)
     {
      flag=2;
    }
    else
    flag=3;
  }
  if (flag==1)
  {
    return a;
  }
  else if (flag==2)
  {
    return b;
  }
  else if (flag==3)
  {
    return c;
  }
}
