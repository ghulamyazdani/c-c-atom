#include <fstream>
#include <iostream>
#include <string>
#include<cstring>
using namespace std;
int main() {
  char str;
  int count=0;
  // string str="ghulam yazdani";
  // ofstream out("a.txt");
  // out<<str;
  // cout<<"DONE";
  ifstream in;
  in.open("a.txt");
  
  while (!in.eof())
  {
    // in.getline(str,50);
    // in>>str;
    // int var=strcmp(str,"the");
    // if(var==0)
    // {
      
    //   count++;
    // }
    in.get(str);
    cout<<str<<"\n";
  }
  in.close();
  cout<<count;
  
  return 0;
}
