#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
  char a[1000];
  int n ;
   cin>>n;

   for (int i = 0; i < n; i++)
   {
     cin >> a[i] ;
   }
   for (int i = n-1; i >= 0; i--)
   {
     cout << a[i] <<" ";
   }
  return 0;
}
