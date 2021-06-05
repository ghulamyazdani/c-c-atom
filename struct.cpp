#include <iostream>
using namespace std;
struct student{
  char name[10];
  int age;
  char section;
  int semester;
};
int main(int argc, char const *argv[]) {
  int n;
  student s[25];
  char e;
  std::cout << "How many entries?" << '\n';
  std::cin >> n;
  for (size_t i = 0; i <n; i++) {
    std::cout << "Enter name" << '\n';
    cin.get(s[i].name,10);
    std::cout << "Enter age" << '\n';
    std::cin >> s[i].age;
    std::cout << "Enter section" << '\n';
    std::cin >> s[i].section;
    std::cout << "Enter semester" << '\n';
    std::cin >> s[i].semester;
  }
  std::cout << "Entries Done!!!" << '\n';
   std::cout << "Want to see all of the entries??Enter Y or N" << '\n';
std::cin >>e;
if(e=='y'||e=='Y')
{
  for (size_t i = 0; i < n; i++) {
    std::cout << "Name="<<s[i].name<< '\n';
    std::cout << "Age="<<s[i].age<< '\n';
    std::cout << "Section="<<s[i].section<< '\n';
    std::cout << "Semester"<<s[i].semester<< '\n';
  }
}
  return 0;
}
