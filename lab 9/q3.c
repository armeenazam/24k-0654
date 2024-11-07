#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("Enter a positive integer: ");
	scanf("%d",&n);
	prime(n);
}
void prime(int n)
{
	int i;
	int count=0;
	for(i=1;i<=n;i++)
	{
		
		if(n%i==0)
		{
			count++;
		}
	}
	if (count==2)
	{
		printf("Number is prime");
	}
	else{
		printf("Not a prime number");
	}
}
