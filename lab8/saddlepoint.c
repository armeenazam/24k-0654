#include<stdio.h>
int main()
{
	int mat[3][3];
	int min,min_col=0;
	printf("Enter elements of matrix:\n");
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nMatrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
    {
		min=mat[i][0];
		for(j=0;j<3;j++)
		{
		  	if(mat[i][j]<min)
			{
			  min=mat[i][j];
			  min_col=j;
	     	}
			
		}
		
	}
	int max=mat[k][min_col];
	for(k=0;k<3;k++)
    {
	    if(mat[k][min_col]>max)
			{
			  max=mat[k][min_col];
	     	}
    }
    if(min==max)
    {
    	printf("\nSaddle point is %d at (%d,%d)",min,i,min_col+1);
	}
	else
	{
		printf("Saddle point not found");
		
		}	
	
    return 0;
}
	


	


