#include<stdio.h>
int main()
{
float tax,sal,rem_sal;
//Calculate tax rate
printf("Enter tax rate: Rs_");
scanf("%f",&tax);
printf("Enter total salary:Rs_");
scanf("%f",&sal);
rem_sal=sal*(1-tax);
printf("The remaining salary:Rs_%f\n",rem_sal);
return 0;
}
