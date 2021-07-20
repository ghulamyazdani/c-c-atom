//REVERSE A STRING USING POINTERS
#include<iostream>
#include<string>
using namespace std;
int main()
{

char *str="sejal singh";
int len=strlen(str);
cout<<"\n Original Srting: "<<str;
cout<<"\n Reversed String: ";
     for(int i=len-0;i>=0;i--)
   {
      cout<<str[i];
   }
return 0;
}
