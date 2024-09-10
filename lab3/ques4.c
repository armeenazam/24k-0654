#include<stdio.h>
int main()
{
int dis=1207,fp1=118,fp2=123;
int f_avg,fuel_cons,total_fuel_consumed,fuel_price1,fuel_price2,total_fuel_price;
printf("Enter fuel average:");
scanf("%d",&f_avg);
if(f_avg<=0)
{
printf("invalid input, please enter positive values");}
else {
fuel_cons=dis*f_avg;
total_fuel_consumed=fuel_cons*2;
fuel_price1=fuel_cons*fp1;
fuel_price2=fuel_cons*fp2;
total_fuel_price=fuel_price1+fuel_price2;
printf("Total fuel price is Rs_%d\n",total_fuel_price);
printf("Total fuel consumed is %d lit.",total_fuel_consumed);}
}
return0;









