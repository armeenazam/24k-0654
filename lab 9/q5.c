#include<stdio.h>
void reverse (char str[100]){
	int temp;
	int i;
	int size = strlen(str);
	for (i = 0; i < size/2 ; i++){
		temp = str [i];
		str[i]= str[size-i-1];
		str[size-i-1] = temp;
}
printf("%s",str);
}
int main()
{
	char str[100];
	printf("Enter a string :");
	gets(str);
	reverse(str);
	
}