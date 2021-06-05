#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main()
{
    int n;
    char str[100],num[11];
    map<string,int>marksMap;
    marksMap["Harry"] = 38;
    marksMap["somer"] = 36;
    map<string,int> :: iterator iter;
    for (iter=marksMap.begin() ; iter!=marksMap.end() ;iter++) {
      cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    return 0;
}
