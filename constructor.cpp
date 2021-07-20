#include <iostream>
#include <string.h>

using namespace std;
class person
{
  long id;
  char name[30];
  char gender;
  float income;


public:
  person();
  person(long,char[],char,float);
  void display()
  {
    std::cout << id << name <<gender <<income << '\n';
  }

};
person::person()
{
  id=0;
  strcpy(name,"NOT KEYED");
  gender=' ';
  income=0;
}
person::person(long uid,char n[],char g,float inc)
{
  id=uid;
  strcpy(name,n);
  gender=g;
  income=inc;
}
int main() {
  person p1;
  std::cout << "Objectdetails" << '\n';
  p1.display();
  return 0;
}
