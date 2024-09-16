#include<stdio.h>
int main()
{
int num1,num2,sum,diff,product,div;
char oper;
printf("Enter first number:");
scanf("%d",&num1);
printf("\nEnter second number:");
scanf("%d",&num2);
printf("\nEnter operator:");
scanf(" %c",&oper);
switch(oper)
{
  case '+':
     sum=num1+num2;
     printf("sum=%d",sum);
     break;
  case '-':
      diff=num1-num2;
      printf("difference=%d",diff);
      break;
  case '*':
      product=num1*num2;
      printf("product=%d",product);
      break;
  case '/':
       div=num1/num2;
       printf("division=%d",div);
       break;
  default:
       printf("invalid operator");
}
return 0;
}





