#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,factorial=1;
  std::cout << "Enter The number for factorial" << '\n';
  std::cin >> n;
 for (size_t i = n-1; i >=1; i--){
   factorial=n*i;
 }
 std::cout << factorial << '\n';
  return 0;
}
