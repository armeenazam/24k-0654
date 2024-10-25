#include<stdio.h>
int main()
{
	int arr[6];
	int i,temp;
	for(i=0;i<6;i++)
	{
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("\nOriginal array  ");
	
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nNew array  ");
	int j=5;
	
	for(i=0;i<5;i++)
	{
		temp=arr[j];
		arr[j]=arr[i];
		arr[i]=temp;
		
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}
