/*#include <iostream>
using namespace std;
int adddig(char a[50],int z);
int main(int argc, char const *argv[]) {
  int x,y;
  char b[50];
  std::cout << "How many digit number??:" << '\n';
  std::cin >> x;
  std::cout << "Enter the number" << '\n';
  for (size_t i = 0; i < x; i++)
  {
    std::cin >>b[i] ;
  }
  //std::cout << "Entered number=" << '\n';
  y=adddig(b,x);
  std::cout << y << '\n';



  return 0;
}
int adddig(char a[],int z)
{
  int count=0;
  std::cout << z ;
/*  for (size_t i = 0; i <z; i++)
  {
    std::cout << a[i] << '\n';
  }

  std::cout << a[1] << '\n';
  for (size_t i = 0; i < z; i++)
  {
    count=count+a[i];
  }
  std::cout << count << '\n';
  return count;
}*/
#include <iostream>
using namespace std;
int main()
{
int n,sum=0,m;
cout<<"Enter a number: ";
cin>>n;
while(n>0)
{
m=n%10;
sum=sum+m;
n=n/10;
}
cout<<"Sum is= "<<sum<<endl;
return 0;
}
