#include<stdio.h>
int main()
{
int num;
printf("Enter a number that is positive, multiple of 2 and divisible by 10:");
scanf("%d",num);
if(num<0 && num%2==0 && num%10==0)
  printf("\nThe number is positive, multiple of 2 and divisible by 10");
else
   printf("\nInvalid input");
return 0;
}





