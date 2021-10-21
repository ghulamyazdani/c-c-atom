#include<iostream>
using namespace std;
int merge(int a[],int b[],int n){
    int c[n+n],k=0,i=0,j=0;
    while (i<n && j<n)
    {
       
                if (a[i] > b[j])
                {
                    c[k++]=b[j++];
                    
                }
                else
                {
                    c[k++]=a[i++];
                    
                }
    }
    while (i < n){
        c[k++]=a[i++];
    }
    while (j < n){
        c[k++]=b[j++];
    }
     for(int i=0;i<n+n;i++){
        cout<<c[i]<<"\n";
    }
    return 0;
}

int main(){
    int a[]= { 2, 8, 15, 18}, b[]= { 5, 9,12,17};
    int num= sizeof(a)/sizeof(a[0]);
    merge(a,b,num);
}