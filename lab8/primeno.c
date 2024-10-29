#include<stdio.h>
int main()
{
	int i, j,sv,ev;
	int count=0;
	printf("Enter starting value of range :");
	scanf("%d",&sv);
	printf("Enter ending value of range :");
	scanf("%d",&ev);
	for(i=sv;i<=ev;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				
				count++;
			}
		}
		if(count==2)
		{
			printf("%d ",i);
		}
	}
}
