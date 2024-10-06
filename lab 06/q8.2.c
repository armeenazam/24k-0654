#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<14;i++)
	{
		if(i==1 || i==5 || i==9 || i==13)
		{
			printf("* * * * *\n");
		}
		if(i==2 || i==4 || i==6 || i==8 || i==10 || i==12 )
		{
			printf("  *   *  \n",i+1,i+3);
		}
		if(i==3 || i==7 || i==11)
		{
			printf("    *    \n",i+2);
		}
    }
}
