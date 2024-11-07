#include<stdio.h>
int calculator(int a, char operand, int b){
    int result;

    switch (operand){
        case '+':
        result = a + b;
        break;
        case '-':
        result = a - b;
         break;
    
        case '*':
        result = a * b;
        break;
    
        case '/':
        result = a / b;
        break;
        default:
       result=-1;
    }
    return result;
}
int main()
{
    int num1, num2;
    char oper;
    printf("Enter 1st operand:");
    scanf("%d", &num1);
    printf("Enter 2nd operand:");
    scanf("%d", &num2);
    printf("Enter operator:");
    scanf(" %c", &oper);

    int result = calculator(num1,oper,num2);
    if (result==-1)
    printf("invalid operator");
    else
    printf("%d",result);

}