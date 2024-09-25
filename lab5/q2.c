#include<stdio.h>
int main()
{
	float ph;
	printf("Enter pH value:");
	scanf("%f",&ph);
	if(ph<0 || ph>14) 
	{
		printf("Invalid value entered");
		return 0;
	}  
	if(ph>7)
	{
		if(ph<12)
		{	
		   printf("Alkaline");
		}
		
		else
		{
		   printf("Very alkaline");
	    }
    }
	else
	{
		if(ph==7)
		{
		   printf("Nuetral");
		}
		else if(ph>2)
		{
           printf("Acidic");
		}
		else
		{
		   printf("Very Acidic");
	    }
	 
		
	}
	return 0;
}
