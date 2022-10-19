#include <stdio.h>

void main()
{
   char name[20];
   int units,n;
   float amount;
   printf("Enter the consumer name\n");
   scanf("%s",name);
   printf("Enter number of units consumed\n");
   scanf("%d",&units);
   if(units<=200)
   {
       amount=units*80;
   }
   else if(n>200&&n<=300)
   {
       amount=200*80;
       amount=amount+(n-200)*90;
       amount=amount+200*80;
   }
   amount=amount/100;
   amount=amount+100;
   if(amount>400)
   {
       amount=amount+15*amount/100;
   }
}

