#include <iostream>
using namespace std;
class student{
private:
  string Name;
  string company;
  int Age;
public:
  void setName(string name){
    Name = name;
  }
  string getName(){
    return Name;
  }
  void setAge(int age){
    Age=age;
  }
  int getAge(){
    return Age;
  }

};
int main(int argc, char const *argv[]) {
  student s1;
  s1.setName("GhulamYazdani");
  std::cout << s1.getName() << '\n';
  s1.setAge(10);
  std::cout << s1.getAge() << '\n';
  return 0;
}
