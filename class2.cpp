#include <iostream>
using std::string;
using namespace std;
class employee{
private:

  string Company;
  int Age;
protected:
  string Name;
public:
  employee(string name,string company,int age){
    Name = name;
    Company = company;
    Age = age;

  }
  void askForPromotion() {
    if (Age>=18) {
      std::cout << Name <<" is promoted to college congo!!!" <<'\n';
    }
    else{
      std::cout << Name <<" is not promoted to college at the moment" <<'\n';
        }
  }
   void work() {
    std::cout << Name <<"is working in the employee section"<< '\n';
  }
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
class Developer:public employee {
public:
  string favLang;
Developer(string name,string company,int age,string lang) : employee(name,company,age){
  favLang=lang;
}
void work() {
  std::cout << Name <<"is working in the Developer section"<< '\n';
}
};
int main(int argc, char const *argv[]) {
  Developer d=Developer("Yazdani" ,"Google",19,"C++");
  /*e1.setName("yAZDANI");
  std::cout << e1.getName() << '\n';
  e1.setAge(10);
  std::cout << e1.getAge() << '\n';*/
  /*std::cout << d.getName() << '\n';*/
  employee *e1 =&d;
  e1->work();

  d.askForPromotion();
  return 0;
}
