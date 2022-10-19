#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp 
{
    int eid;
    char ename[20];
};
typedef struct emp E;
void pop(E E1[20],int *top);
void display(E E1[20],int top);
void push(E E[20],int *top);
int main()
{
    E E1[20];
    int top=-1,ch,eid;
    char ename[20];
    while(1)
    {
        printf("enter the choice:\n");
        printf("1.push\n2.pop\n3.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    push(E1,&top);
                    display(E1,top);
                    break;
            case 2:pop(E1,&top);
                    display(E1,top);
                    break;
            case 3:display(E1,top);
                   break;
            default:exit(0);
        
        
        }
    }
}
void pop(E E1[20],int *top)
{
    if((*top)>-1)
    {
        printf("Pop employ details is eid=%d,ename=%s\n",E1[*top].eid,E1[*top].ename);
        (*top)--;
    }
    else
    {
        printf("UNDERFLOW\n");
    }
}
void display(E E1[20],int top)
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
    printf("Elements of stack:\n");
    for(i=0;i<=(top);i++)
    {
        printf("eid=%d,ename=%s\n",E1[i].eid,E1[i].ename);
    }
    }
}
void push(E E1[20],int *top)
{
    E E2[20];
    int eid;
    char ename[20];
    if((*top)<19)
    {
        printf("Enter eid and ename\n");
                    scanf("%d%s",&eid,ename);
        (*top)++;
        //E1[*top]=E2;
        E1[*top].eid=eid;
        strcpy(E1[*top].ename,ename);
        exit(0);
    }
    else
    {
        printf("OVERFLOW\n");
    }
}





