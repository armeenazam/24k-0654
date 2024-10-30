#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the number of rows or columns of matrix1 : ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the number of rows or columns of matrix2 : ");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Multiplication is impossible");
		return 0;
	}
	int mat1[r1][c1];
	printf("Enter the elements of matrix 1 :");
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		   scanf("%d",&mat1[i][j]);
		}
	}
	int mat2[r2][c2];
	printf("Enter the elements of matrix 2 :");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
		   scanf("%d",&mat2[i][j]);
	    }
	}
	int result[r1][c2];
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			result[i][j]=0;
			for(k=0;k<r2;k++)
			{
				result[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("\nRESULT:\n")
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		   printf("%d ",result[i][j]);
		}
		printf("\n");
	}


	
}
