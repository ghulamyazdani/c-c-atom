/*WAP to transpose a matrix*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[20][20],b[20][20];
int i,j,m,n;
cout<<"Input Row and column:";
cin>>m>>n;
cout<<"\nInput matriz A:";
for(i=0;i<m;++i)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nMatrix A:";
for(i=0;i<m;++i)
{
cout<<"\n";
for(j=0;j<n;++j)
cout<<" "<<a[i][j];
}
for(i=0;i<n;++i)
{
for(j=0;j<m;++j)
b[i][j]=a[i][j];
}
cout<<"\nTranspose of matrix:";
for(i=0;i<n;++i)
{
cout<<"\n";
for(j=0;j<m;++j)
cout<<" "<<b[i][j];
cout<<"\n";
}
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}