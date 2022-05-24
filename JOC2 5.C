#include <stdio.h>
#include <stdlib.h>
int main()
{
   int books,bill;
   printf("Enter the number of books :\n");
   scanf("%d",&books);
   if(books<10000)
   {
   printf("No discount!!\n");
   bill=books*10;
   printf("The total cost is %d",bill);
   exit (0);
   }
   else if(10000<books<15000)
   {
       printf("Hey!! you got 10 percent discount\n");
       bill=((books*10)-(books*10)*0.1);
       printf("The total cost is %d",bill);
       exit (0);
   }
   else if(15000<books<20000);
   {
       printf("Hey!! you got 20 percent discount\n");
       bill=(books*10)*0.2;
       printf("The total cost is %d",bill);
       exit(0);
   }
}

