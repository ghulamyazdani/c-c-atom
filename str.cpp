#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;
  std::cout << "Enter the line" << '\n';
  getline(ws>>str);
  std::cout <<"\n"<< str << '\n';
  return 0;
}
