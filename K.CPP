#include <iostream.h>	
void change(int &N1,int &N2)
{ 
N1+=N2;
N2+=N1;
}
void main()
{
int Num1=25, Num2=20;
cout<<"Num 1="<<Num1--<< "Num 2 = "<<Num2 + 6<<endl;
change(Num1,Num2);
cout<<"Num 2="<<++Num2<< "Num 1 = "<<Num1 - 5<<endl;
change(Num2,Num1);
cout<<"Num 1="<<--Num2<< "Num 2 = "<<Num2--<<endl;
}
