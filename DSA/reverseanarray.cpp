#include <bits/stdc++.h>
using namespace std;
string reverseWord(string str)
{
  reverse(str.begin(), str.end());
  return str;
}
int main(int argc, char const *argv[])
{
  string s;
  cin >> s;
  cout << reverseWord(s);
}
