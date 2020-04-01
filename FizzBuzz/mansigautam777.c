#include <stdio.h>
int main ()
{
int i;
for(i=1;i<=100;i++)
{
if (i%15==0)
 printf("FIZZ BUZZ\t");
else if (i%3==0)
 printf("FIZZ\t");
else if(i%5==0)
 printf("BUZZ\t");
else 
 printf("%d\t",i);
 }
 return 0;
 }
