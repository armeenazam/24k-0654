#include<stdio.h>
int main()
{
	char str[30];
	int len,i;
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	printf("Enter the length of string : ");
	scanf("%d",&len);
	printf("Enter a string :");
	scanf(" %s",str);  //gets(str) is not working in this code 
	
	for (i==0;i<len;i++)
	{
		switch(str[i])
		{
			case 'a':
				count1++;
				break;
			case 'e':
				count2++;
				break;
			case 'i':
				count3++;
				break;
			case 'o':
				count4++;
				break;
			case 'u':
				count5++;
				break;	
		}
   }
		printf("\na=%d\ne=%d\ni=%d\no=%d\nu=%d\n",count1,count2,count3,count4,count5);
		return 0;
		//wasted 1 hour 
	
	
	
}
