#include<stdio.h>
int main()
{
	int count=0;
	char str1[100],*ptr1;
	char str2[100],*ptr2;
	printf("Enter a string : ");
	gets(str1);
	ptr1=str1;
	
	while(*ptr1!='\0')
	{
		count++;
		ptr1++;
	}
	printf("Length of %s is : %d ",str1 , count);
	
	ptr1=str1+count-1;
	ptr2=str2;
	
	while(ptr1>=str1)
	{
		*ptr2=*ptr1;
		ptr2++;
		ptr1--;
	}
	*ptr2='\0';
	printf("\nOriginal string = %s",str1);
	printf("\nReverse string = %s",str2);
	return 0;
}
