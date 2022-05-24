#include <stdio.h>

void main()
{
   int age;
   printf("Enter the age of the person\n");
   scanf("%d",&age);
   if(age>=18)
     {
         printf("Eligible for voting!!");
     }
    else
    {
        printf("Not eligible for voting");
    }
}

