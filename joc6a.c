#include <stdio.h>  
  
int main()  
{  
    int a, b, large;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &a, &b);  
  
    (a > b) ? (large = a) : (large = b);  
  
    printf("largest of %d and %d is %d\n", a, b, large);  
  
    return 0;  
}  
