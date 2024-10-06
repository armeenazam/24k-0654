#include<stdio.h>
int main()
{
	char i;
	for(i=65;i<78;i++)
	{
		if(i==65 || i==69 || i==73 || i==77)
		{
			printf("%c %c %c %c %c\n",i,i+1,i+2,i+3,i+4);
		}
		if(i==66 || i==68 || i==70 || i==72 || i==74 || i==76 )
		{
			printf("  %c   %c  \n",i+1,i+3);
		}
		if(i==67 || i==71 || i==75)
		{
			printf("    %c    \n",i+2);
		}
    }
}

	

	    
