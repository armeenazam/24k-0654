#include<stdio.h>
int main()
{
	int i=0;
	do
	{
		if(i%5==0)
		{
			printf("*       *\n");
		}
		else
		{
			printf("* * * * *\n");
		}
		i++;
	}
	while(i!=6);
}
