//remove duplicate numbered balloon
#include<stdio.h>
#include<stdlib.h>
void accept(int a[])
{
    int i;
    printf("Enter balloon:\n");
    for(i=0;i<8;i++)
        scanf("%d",&a[i]);
}
void r_d(int a[])
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]==a[j])
            {
               a[j]=-99;
            }
        }
    }
    for(i=0;i<8;i++)
    {
        if(a[i]!=-99)
            printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[8];
    accept(a);
    r_d(a);
}