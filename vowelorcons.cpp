#include <iostream>
using namespace std;
void vow(char ch);
int main() {
  char a;
  std::cout << "Enter the character" << '\n';
  std::cin >> a;
  vow(a);
  return 0;
}
void vow(char ch)
{
  switch (ch)
   {
    case 'a':std::cout << "Its vowel" << '\n';
          break;
    case 'e':std::cout << "Its vowel" << '\n';
           break;
    case 'i':std::cout << "Its vowel" << '\n';
           break;
    case 'o':std::cout << "Its vowel" << '\n';
           break;
    case 'u':std::cout << "Its vowel" << '\n';
           break;
    default:std::cout << "Its consonant" << '\n';
            break;
  }
}
