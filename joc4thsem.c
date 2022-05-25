#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,m,sum,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the sum:\n");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        count=a[i];
        for(j=i+1;j<n;j++)
        {
            count=count+a[j];
            if(count==sum)
            {
                printf("The sub array is:\t");
                for(m=i;m<=j;m++)
                {
                    printf("%d\t",a[m]);
                }
                printf("\n");
                printf("indices range from %d to %d",i,j);
                return 0;
            }
            if(a[j]==sum)
            {
                printf("sub array is :%d",a[j]);
                printf("indices range from %d to %d",j,j);
                exit(0);
            }
        }
    }
    printf("not possible");
    return 0;
}