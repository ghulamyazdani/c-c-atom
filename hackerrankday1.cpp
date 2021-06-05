#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4,x;
    double d = 4.0,y;
    string s = "HackerRank ",h;

    cin>>x;
    cin >> y;
    getline(cin>>ws,h);

    std::cout << h<<" " <<s<< '\n';
    std::cout << x<<y << '\n';
    return 0;
  }
