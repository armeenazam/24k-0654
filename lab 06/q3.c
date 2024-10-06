#include<stdio.h>
int main()
{
	int num,rem;
	int arm_strong=0;
	printf("Enter a number :");
	scanf("%d",&num);
	int new_num=num;
	do
	{
		rem=new_num%10;
		arm_strong=arm_strong+(rem*rem*rem);
		new_num=new_num/10;
	}
	while(new_num!=0);   
	if (arm_strong == num)
	{
		printf("Armstrong Number");
	}
	else 
	{
		printf("Number is not an armstrong number");
	}
	return 0;
}
