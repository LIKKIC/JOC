
#include <stdio.h>
#include<stdlib.h>
void main()
{
   int op1,op2,res;
   char oper;
   printf("enter the value of operator\n");
   scanf("%c",&oper);
   printf("enter the value of operands\n");
   scanf("%d%d",&op1,&op2);
   switch(oper)
   {
       case '+':res=op1+op2;
                 break;
       case '-':res=op1-op2;
                 break;
       case '*':res=op1*op2;
                 break;
       case '/':if(op2==0)
       {
           printf("divide by zero error");
           exit(0);
       }
       else
       {
           res=op1/op2;
       }
       break;
       case '%':res=op1%op2;
       break;
       default:printf("not valid operator\n");
       exit(0);
   }
       printf("the result is=%d",res);
       
   
}


