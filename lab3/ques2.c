#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter first number;");
scanf("%d",&a);
printf("Enter second number;");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("The first number becomes:%d \n The second number becomes:%d \n",a,b);
return 0;
}
