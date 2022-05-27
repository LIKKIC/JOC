//swapping list without copying to other string
#include<stdio.h>
#include<stdlib.h>
struct n   
{
    int info;
    struct n*link;
};
typedef struct n* node;
node getnode()
{
    node x;
    x=(node)malloc(sizeof(struct n));
    return x;
}
node accept(node first,int info)
{
    node cur,prev,temp;
    temp=getnode();
    temp->info=info;
    if(first==NULL)
        return temp;
    else
    {
        cur=first;
        while(cur!=NULL)
        {
            prev=cur;
            cur=cur->link;
        }
        prev->link=temp;
        return first;
    }
}
void rev(node first,int n)
{
    int i=0;
    node cur,prev,temp,sec;
    temp=getnode();
    prev=first;
    cur=first;
    while(cur->link!=NULL)
    {
        cur=cur->link;
    }
    if(n%2!=0)
    {
    while(prev!=cur)
    {
        temp->info=prev->info;
        prev->info=cur->info;
        cur->info=temp->info;
        sec=cur;
        prev=prev->link;
        cur=first;
        while(cur->link!=sec)
        {
            cur=cur->link;
        }
    }
    }
    else
    {
      while(i<=n/2)
    {
        temp->info=prev->info;
        prev->info=cur->info;
        cur->info=temp->info;
        sec=cur;
        prev=prev->link;
        cur=first;
        while(cur->link!=sec)
        {
            cur=cur->link;
        }
        i++;
    }  
    }
    cur=first;
    while(cur!=NULL)
    {
        printf("%d\t",cur->info);
        cur=cur->link;
    }
}
int main()
{
    int i,n,x;
    node first;
    first=getnode();
    first=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        first=accept(first,x);
    }
    rev(first,n);
    
}
