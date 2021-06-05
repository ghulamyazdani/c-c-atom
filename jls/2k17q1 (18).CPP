/*WAP that uses a function called carea() to calculate area of circle.
The function carea() recieves radius of float type and returns area double type,
The function main() gets a radius value from user,calls carea(), and displays the
result.The function carea() is local to main().*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double carea(float);
float rad;
cout<<"Enter Radius:";
cin>>rad;
double area=carea(rad);
cout<<"\nThe area of circle of radius:"<<rad<<" unit is:"<<area<<" sq.unit";
getch();
}
double carea(float r)
{
double ar=(double)(3.14*r*r);
return(ar);
}
