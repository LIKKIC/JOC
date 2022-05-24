#include <stdio.h>

int main()
{
    int n,m,sum=0;
    printf("Enter the numbers :");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m+1;
        n=n/10;
    }
    printf("sum=%d",sum);
}


