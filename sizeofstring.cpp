#include <iostream>
#include <string.h>

using namespace std;
bool isNumber(const string& s)
{
    for (char const &ch : s) {
        if (std::isdigit(ch) == 0)
            return false;
    }
    return true;
 }
int main(int argc, char const *argv[]) {
  string name = "hello";
    std::string str1 = std::to_string(12.10);
  std::cout << str1 << '\n';
  std::cout << name << '\n';
  isNumber(str1)?cout << "yes" << '\n':cout << "No" << '\n';
  return 0;
}
