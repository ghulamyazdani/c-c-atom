#include <iostream>
using namespace std;
class student{
  int a;
  int b;
  student(){
    a=10;
    b=20;
 };

  int sum(){
    cout<<a<<"+"<<b<<"="<<a+b;
  };

};

int main(int argc, char const *argv[]) {
  student s1,s2;
  s1.sum();

  return 0;
}
