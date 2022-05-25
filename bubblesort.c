//bubble sort
#include <stdio.h>

int main()
{
   int n,i,j,a[10],temp;//Declaration of variable
   printf("Enter number of array elements : \n");
   scanf("%d",&n);
   printf("Enter the array elements \n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("The original elements are : \n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   for(i=0;i<n-1;i++)//Number of Passes
   {
       for(j=0;j<n-i-1;j++)//Comparisions
       if(a[j]>a[j+1])//swap elements 
       {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
       }
   }
   //print sorted  list 
   printf("\n The sorted elements are : \n");
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
   return 0;
}


