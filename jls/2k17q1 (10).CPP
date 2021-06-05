/*WAP to find the sum of main diagonal elements of 3 by 3 matrix*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[5][5],d1sum=0,d2sum=0,i,j,m;
cout<<"Enter size of matrix:";
cin>>m;
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
cin>>a[i][j];
}
for(i=0;i<m;++i)
for(j=0;j<m;++j)
{
if(i==j)
d1sum+=a[i][j];
if(i+j==(m-1))
d2sum+=a[i][j];
}
cout<<"\nSum of first diagonal is:"<<d1sum;
cout<<"\nSum of second diagonal is:"<<d2sum;
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}