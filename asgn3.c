#include <stdio.h>
#include <string.h>
void main()
{
char string[100],ptr;
int c=0,count[26]={0};

printf("Enter a string\n");
scanf("%[^\t\n]s",string); 
ptr=string[0];

while (ptr)
{
/* Consider characters from 'a' to 'z' only */
if ( ptr >= 'a' && ptr <= 'z' )
count[string[c]-'a']++;
c++;
ptr++;
}
for(c=0;c<26;c++)
{
if(count[c]!=0)
printf("%c occurs %d times in string.\n",c+'a',count[c]);
}
}