#include <stdio.h>
#include <stdlib.h>
int main()
{
   int rank;
   printf("Please enter your rank :\n");
   scanf("%d",&rank);
   if(rank<=3250)
   {
       printf("You will get seat in all branches");
      exit (0); 
   }
    else if(3250<rank<=6505)
   {
       printf("You will get seat in ISE,EandC & Mech");
       exit (0);
   }
   else if(6505<rank<=12012)
   {
       printf("You will get seat in EandC & Mech");
   }
   else if(12012<rank<=22340)
   {
       printf("You will get seat in Mech");
       exit(0);
   }
   else
   printf("Admission is not possible in RNSIT");
}


