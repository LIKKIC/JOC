/*Multiple stack*/
#include<stdio.h>
#include<stdlib.h>
void pop(int S[10],int boun[],int top[10],int i)
{
    int elem;
    if(top[i]==boun[i])
    {
        printf("Stack %d underflow condition\n",i);
        return;
    }
    elem=S[top[i]];
    top[i]=top[i]-1;
}
void push(int S[10],int top[10],int boun[10],int i,int elem)
{
    if(top[i]==boun[i+1])
    {
        printf("Stack %d is full\n",i);
        return;
    }
    top[i]=top[i]+1;
    S[top[i]]=elem;
}
void display(int S[10],int boun[10],int top[10],int no_of_stacks)
{
    int i,j;
    for(i=0;i<no_of_stacks;i++)
    {
        printf("\nElements of stack %d\n",i);
        if(top[i]==boun[i])
        {
            printf("\nStack %d underflow\n",i);
            continue;
        }
        for(j=boun[i]+1;j<=top[i];j++)
            printf("%d",S[j]);
    }
}
int main()
{
    int ch,top[10],size_of_each,no_of_stacks,boun[10],elem;
    int S[20],i;
    printf("Enter the no of stacks and size of each stack\n");
    scanf("%d %d",&no_of_stacks,&size_of_each);
    printf("Enter the positions of top\n");
    for(i=0;i<no_of_stacks;i++)
    {
        scanf("%d",&top[i]);
    }
    printf("Enter the positions of boundary\n");
    for(i=0;i<=no_of_stacks;i++)
    {
        scanf("%d",&boun[i]);
    }
    while(1)
    {
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element to be pushed\n");
            scanf("%d",&elem);
            printf("Enter the stack number to which the element must be inserted\n");
            scanf("%d",&i);
            push(S,top,boun,i,elem);
            display(S,boun,top,no_of_stacks);
            break;
            case 2:pop(S,boun,top,i);
            display(S,boun,top,no_of_stacks);
            break;
            case 3:display(S,boun,top,no_of_stacks);
            break;
            default:exit(0);
        }
    }
}

