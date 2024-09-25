#include<stdio.h>
int main()
{
	float total_calories;
	float fat_gram,calories_from_fat,calories_percentage;
	printf("Enter number of calories :");
	scanf("%f",&total_calories);
	printf("\nEnter fat grams :");
	scanf("%f",&fat_gram);
	if(total_calories<0 || fat_gram<0)
	{
		printf("\nInvalid input \ncalories or fat grams cannot be less than 0 ");
	}
	else
	{
		
	   calories_from_fat=fat_gram*9;
	   if(calories_from_fat>total_calories)
	   {
	       printf("\nerror;\n calories or fat gram is incorrectly entered");
    	}
    	else
		{
		
        	calories_percentage=calories_from_fat/total_calories;
	        printf("\nThe percentage of fat calories is :%.2f",calories_percentage);
		}
   }
	return 0;
}
