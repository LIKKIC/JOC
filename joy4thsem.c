//permutate pbit
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,pbit;
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter pbit\n");
    scanf("%d",&pbit);
    int b[pbit];
    for(i=0;i<pbit;i++)
    {
        b[i]=a[i];
        a[i]=-999;
    }
    int c[n];
    for(i=0,j=0;i<n;i++)
    {
        if(a[i]!=-999)
        {
            c[j]=a[i];
            j++;
        }
    }
    
    for(i=pbit-1,j=0;i<n;i++)
    {
        c[i]=b[j];
        j++;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d\t",c[i]);
    }
}