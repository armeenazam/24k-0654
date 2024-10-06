/*The while loop is used in situations where user input is required because in such case we don't know the number of iterations.since, while loop does not require the number of iterations and works until the condition becomes false unlike for loop in which iterations are defined at the beginning of loop
.Hence,while loop will be preferred*/
#include<stdio.h>
int main()
{
	int num,sum=0;
	
	while(1)
	{
		printf("\nEnter a number (Enter 0 to terminate the program) :");
		scanf("%d",&num);
	
		 if (num==0)
		 {
		 	printf("\n\nProgram terminated\n");
		 	
		 	break;
		 }
		 else
		 {
		 	sum=sum+num;
		 	printf("Total= %d",sum);
		 }
	}
	return 0;
}

