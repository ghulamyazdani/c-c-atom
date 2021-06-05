#include<iostream>
#include<ctype.h>
using namespace std;
int main( )
{
char Text[ ] = "Hello@Work!";
for(int I=0; Text[I]!='\0';I++)
{
if(!isalpha(Text[I]))
Text[I]='*';
else if (islower(Text[I]))
Text[I]=Text[I]+1;
else
Text[I] = Text[I+1];
}
cout<<Text;
return 0;
}
