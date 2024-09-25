#include<stdio.h>
int main()
{
	char day,vacation;
	printf("Is today a weekday?\nEnter T for true and F for false :");
	scanf(" %c",&day);
	printf("Are we on a vacation?\nEnter T for true and F for false :");
	scanf(" %c",&vacation);
	if(day=='F'&& vacation=='F')
	{
		printf("\nCan we sleep in? TRUE");
	}
	else if(day=='T' && vacation=='F')
	{
	    printf("\nCan we sleep in? FALSE");	
	}
	else if(day=='F' && vacation=='T')
	{
		printf("\nCan we sleep in? TRUE");
	}
	else
	{
		printf("INVALID INPUT");
		
	}
	return 0;
}
