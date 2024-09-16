#include<stdio.h>
int main()
{
int cus_id,unit;
char name[1024];
float bill,surcharge,net_bill;
float up1=16.20,up2=20.10,up3=27.10,up4=35.90;
 printf("Enter customer ID:");
scanf("%d",&cus_id);
printf("Enter name:");
scanf(" %s",&name);
printf("Enter units consumed:");
scanf("%d",&unit);
if(unit<=199)
{
  bill=unit*up1;
  printf("Amount charges at %.2f per unit=Rs%.2f",up1,bill);
}
else if(unit>=200 && unit<300)
{
  bill=unit*up2;
  printf("Amount charges at %.2f per unit=Rs%.2f",up2,bill);
}
else if(unit>=300 && unit<500)
{
  bill=unit*up3;
  printf("Amount charges at %.2f per unit=Rs%.2f",up3,bill);
}
else if(unit>=500)
{
  bill=unit*up4;
  printf("Amount charges at %.2f per unit=Rs%.2f",up4,bill);
}

if(bill>18000)
{
  surcharge=bill*0.15;
  net_bill=bill+surcharge;
}
 printf("\nSurcharge amount:Rs-%.2f",surcharge);
 printf("\nNet amount paid by the customer:Rs-%.2f",net_bill);
 return 0;
}




 
