//TO FIND THE SUM OF ROWS & COLUMNS FROM 2D-ARRAY

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[10][10],i,j,r[10],c[10],row,col;

cout<<"\n Enter number of Rows & Columns of matrix: ";
cin>>row>>col;
cout<<"\n Enter Elements of a matrix: ";
for(i=0;i<row;++i)
   for(j=0;j<col;++j)
       cin>>A[i][j];
cout<<"\n Given matrix is: ";
for(i=0;i<row;++i)
{
  cout<<"\n";
  for(j=0;j<col;++j)
      cout<<A[i][j]<<" ";
}
for(i=0;i<row;i++)
{
 r[i]=0;
 for(j=0;j<col;++j)
     r[i]+=A[i][j];
}
for(j=0;j<col;++j)
{
  c[j]=0;
  for(i=0;i<row;++i)
    c[j]+=A[i][j];
}
for(i=0;i<row;++i)
    cout<<"\n Sum of Row #"<<i+1<<"is: "<<r[i];
for(i=0;i<col;++i)

    cout<<"\n Sum of Column #"<<i+1<<"is: "<<c[i];
    cout<<"\n By KUSH BHARGAV SAH;XII-B";
getch();
}