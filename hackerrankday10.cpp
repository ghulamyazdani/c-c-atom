#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
     int i=0;
    int a[10];
    int rem;
    while(n)
    {
    rem=n%2;
    n=n/2;
    a[i]=rem;
    i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
    return 0;
}
