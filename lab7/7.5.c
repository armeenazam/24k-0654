#include<stdio.h>
int main ()
{
	int arr[10];
	int freq[100]={0};
	int i;
	for(i=0; i<10 ; i++)
	{
		printf("Enter elment %d of array : ",i+1);
		scanf("%d",&arr[i]);
		freq[arr[i]]++;
		
		
	}
	for(i=0 ; i<=99 ;i++)
	{
		if (freq[i]>0)
		{
			printf("\n%d : %d times\n",i,freq[i]);
		}
	}
	
}
