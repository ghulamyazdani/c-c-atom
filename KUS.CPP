
#include<iostream.h>
void execute(int &x,int y=200)
{   int temp=x+y;
x+=temp;  if(y!=200)
cout<<temp<<" "<<x<<" "<<y;
}
void main( )
{   int a=50, b=20;
execute(b); cout<<a<<b<<"\n";
execute(a,b); cout<<a<<b<<"\n";
}
