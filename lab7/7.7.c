#include<stdio.h>
int main()
{
	int i=0,j=1,num;
	int arr[100];
	
	printf("Enter the size of array :");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
		
	}
	i=0;
	while(i<num && j<num)
	{
		if(arr[i]==arr[j])
		{
			printf("Number %d occurs more than once\n",arr[i]);
			i++;
			j=i+1;
		}
		else
		{
			j++;
		}
	}
	return 0;
}
