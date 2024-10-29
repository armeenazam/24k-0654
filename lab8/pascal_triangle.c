#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number of rows :");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Invalid input");
	}
	else
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			int nfact=1;
	        for(k=2;k<=i;k++)
            {
		       nfact=nfact*k;
	        }
	        int rfact=1;
	        for(k=2;k<=j;k++)
           	{
		        rfact=rfact*k;
			}
         	int n_rfact=1;
	        for(k=2;k<=i-j;k++)
          	{
	            n_rfact=n_rfact*k;
        	}
        
	        int nCr=nfact/(rfact*n_rfact);
	        printf("%d ",nCr);
	    }
	    printf("\n");
	}
}
return 0;
}
		
			
		
		
	
	
	

