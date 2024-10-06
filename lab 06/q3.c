#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
		
	}
	if (count==2)
	{
		printf("\nNumber is prime\n");
		
	}
	else
	{
		printf("\nNumber is not prime\n");
	}
	
	int j,a=0,b=1,c;
	printf("\nFibonacci seies : \n");
	for(j=1;j<=num;j++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
	
}
