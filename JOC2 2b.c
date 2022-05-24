#include <stdio.h>

int main()
{
   int a,b,c,large;
   printf("Enter any three integers :\n");
   scanf("%d%d%d",&a,&b,&c);
   if((a>0)&(b>0)&(c>0))
   {
       large=a>b?(a>c?a:c):(b>c?b:c);
       printf("The largest number is %d",large);
   }
   else
   printf("Invalid input");
}

