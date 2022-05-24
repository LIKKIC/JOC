# include <stdio.h>
 
void main()
{
    int a, b, c, large ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    large = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe largest number is : %d", large) ;
}
