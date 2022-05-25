//linear search
#include <stdio.h>

int main()
{
   int array[100],search,c,n;
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   printf("Enter %d integers(s)\n",n);
   for(c=0;c<n;c++)
   scanf("%d",&array[c]);
   printf("Enter a number to search\n");
   scanf("%d",&search);
   for(c=0;c<n;c++)
   {
       if (array[c]==search) /* if required element is found*/
       {
           printf("%d is located at %d.\n",search,c+1);
           break;
       }
   }
   if(c==n)
   printf("%d is not present in the array.\n",search);
   return 0;
}


