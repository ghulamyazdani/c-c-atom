#include <iostream>
using std::string;
using namespace std;
class employee{
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
  employee e1;
  e1.setName("yAZDANI");
  std::cout << e1.getName() << '\n';
  e1.setAge(10);
  std::cout << e1.getAge() << '\n';
  return 0;
}
