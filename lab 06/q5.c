#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=5;i++)
	{
		if(i%5==0)
		{
			printf("* * * * *\n");
		}
		else
		{
			printf("*       *\n");
		}
	}
}
