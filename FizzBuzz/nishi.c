#include<stdio.h>

void main()
{
   int n;
   
   for(n=1;n<=100;n++)
   {
      if(n%3==0&&n%5!=0)
         printf("Fizz\n");
      else if(n%5==0&&n%3!=0)
         printf("Buzz\n");
      else if (n%3==0&&n%5==0)
         printf("FizzBuzz\n");
      else printf("%d\n",n);
   }
   
}
