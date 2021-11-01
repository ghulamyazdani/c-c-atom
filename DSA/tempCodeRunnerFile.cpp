#include<iostream>
#include<iomanip>
using namespace std;
void merge (int[],int,int[],int,int[]);
int main()
{ 
    int A[50],B[50],C[50],M,N,MN;
    
        //1st array 
        cout <<"How many elements do u want to create with 1st array?"<<endl;  
        cin>>M;
       
        //enter elements in 1st array
        cout<<"\nenter elements 1st of array:\n"<<endl;
        for (int i=0;i<M;i++)   cin>>A[i];
        
        ////////////////////////////////////////////////////////////////////////
        
       //2nd array
        cout <<"\nHow many elements do u want to create with 2st array?\n"<<endl;  
        cin>>N;

        //enter elements in 2nd array
        cout<<"\nenter elements 2nd of array:\n"<<endl;
        for (int i=0;i<N;i++)   cin>>A[i]; 
        
        ////////////////////////////////////////////////////////////////////////
        
        MN=M+N;
        merge(A,M,B,N,C);
        
        cout<<"\nArray after merging is:\n"; 
        for (int i=0;i<M+N;i++)   cout<<C[i]<<"   ";
        cout<<endl;
        return 0;

};

void merge(int A[],int M,int B[],int N,int C[])
{
    int a=0,b=0,c=0;
   
   while (a < M && b < N) {
      if (A[a] < B[b]) 
      {
         C[c++] = A[a++];
      } 
      else 
      {
         C[c++] = B[b++];
      }
   }
   while (a < M) 
   {
      C[c++] = A[a++];
   }
   while (b < N) 
   {
      C[c++] = B[b++];
   }
}