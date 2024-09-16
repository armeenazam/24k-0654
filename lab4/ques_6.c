#include<stdio.h>
int main()
{
int cost,saved,dis_amt,actual;
float dis=0;
printf("Enter the cost of items: Rs_:");
scanf("%d",&cost);
if(cost<2000)
{
  dis=5;}
else if (cost>=2000 && cost<4000)
{
  dis=10;}
else if (cost>=4000 && cost<=6000)
{
  dis=20;}
else if (cost>6000)
{
  dis=35;}
else if (cost<500)
{
  printf("Sorry,the minimum amount eligible for discount is Rs-500");}
actual=cost;
saved=cost-(dis/100);
dis_amt=cost*(1-dis/100);

printf("\nActual amount = Rs-%d",cost);
printf("\nSaved amount = Rs-%d",saved);
printf("\nDiscounted amount = Rs-%d",dis_amt);
return 0;}
