#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10],i,target;
    int k=0,num[5];
    cout<<"Enter Address";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter Target";
    cin>>target;
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (arr[i]+arr[j]==target)
            { 
                
                num[k]=arr[i];
                num[k+1]=arr[j];
                k++;
                break;
                
            }
            
        }
        
    }
   for (size_t i = 0; i < k; i++)
   {
       cout<<num[i]<<",";
   }
   
    
    
    
    return 0;
}
