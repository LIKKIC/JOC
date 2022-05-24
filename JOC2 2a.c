#include <stdio.h>

int main()
{
   int a,b,large;
   printf("Enter any two integers :\n");
   scanf("%d%d",&a,&b);
   if(a&&b>0)
   {
       (a>b)?(large=a):(large=b);
       printf("The largest number is %d",large);
   }
   else
   printf("Invalid input");
}

