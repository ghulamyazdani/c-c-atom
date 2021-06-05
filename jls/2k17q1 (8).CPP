/*WAP products of two matrices*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int a[10][10],b[10][10],c[10][10];
int i,j,m,n,p,q;
cout<<"Input row and column of matrix A:";
cin>>m>>n;
cout<<"Input row and column of matrix B:";
cin>>p>>q;
if((m==p)&&(n==q))
cout<<"\nMatrix can be added";
else
{
cout<<"\nMatrix cant be multiply";
exit(0);
}
cout<<"\nInput Matrix A:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\nMatrix A:";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<" "<<a[i][j];
}
cout<<"\nInput Matrix B:";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>b[i][j];
}
cout<<"\nMatrix B:";
for(i=0;i<p;i++)
{
cout<<"\n";
for(j=0;j<q;j++)
cout<<" "<<b[i][j];
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
c[i][j]=a[i][j]*b[i][j];
}
cout<<"\nThe product of two matrices is:";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<" "<<c[i][j];
}
cout<<"\nMade By Shaukat Raza"<<"\nXIth A";
getch();
}

