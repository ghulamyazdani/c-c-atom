/*#include <stdio.h>
int main()
{
  for (size_t i = 0; i < 10; i++)
  {
    for (size_t j = 0; j <i; j++)
     {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}*/
#include<stdio.h>
int main()
{
 int i,fact=1,number;
 printf("Enter a number: ");
  scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
      fact=fact*i;
    }
  printf("Factorial of %d is: %d",number,fact);
return 0;
}
