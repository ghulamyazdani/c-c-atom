#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


  int a;
  double b;
  string c;
  // Declare second integer, double, and String variables.

    cin>>a>>b;
    getline(cin,c);// Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

  cout<<a+i<<"\n";  // Print the sum of both integer variables on a new line.

  std::cout << std::fixed << std::setprecision(1) << d+b<<"\n";// Print the sum of the double variables on a new line.

   cout<<s<<" "<<c;; // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
  }
