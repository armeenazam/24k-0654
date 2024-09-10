#include<stdio.h>
int main()
{
int P,T;
float R,S_I;
printf("Enter the principle value: Rs_");
printf("\nNote: The value of principle must be between 100Rs. to 1,000,000\n");
scanf("%d",P);
printf("Enter the rate of interest: %");
printf("\nNote: The rate of interest must be between must be between 5% to 10%\n");
scanf("%f",R);
printf("Enter the time period:");
printf("\nNote: The time period must be between 1 to 10 years\n");
scanf("%d",&T);
S_I=(P*R*T)/100;
printf("The value of simple interest is: Rs %f",S_I);
return0;
}