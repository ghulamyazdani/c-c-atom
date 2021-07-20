#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int numbers[50],*ptr;
    int n,i;
    cout<<"Enter total numbers";
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        cout<<endl<<"Enter number"<<i+1<<":";
        cin>>numbers[i];
        cout<<endl;
     
    }
    ptr=numbers;
    cout<<ptr;
    // int sum=0;
    // for (size_t i = 0; i < n; i++)
    // {
    //     if(*ptr%2==0)
    //       sum+=*ptr;
    //     ptr++;
    // }
    // cout<<endl<<"The sum of all even element is:"<<sum;
    return 0;
}
