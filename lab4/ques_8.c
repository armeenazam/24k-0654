#include<stdio.h>
int main()
{
 int num;
 printf("Enter a number:");
 scanf("%d",&num);
 if(num>=1 && num<=9)
 {
 switch(num)
{
  case 1:
  printf("one\n");
  break;
  case 2:
  printf("two\n");
  break;
  case 3:
  printf("three\n");
  break;
  case 4:
  printf("four\n");
  break;
  case 5:
  printf("five\n");
  break;
  case 6:
  printf("six\n");
  break;
  case 7:
  printf("seven\n");
  break;
  case 8:
  printf("eight\n");
  break;
  case 9:
  printf("nine\n");
  break;
}
}
else if(num>9)
{
	printf("Greater than nine");
}
else
{
    printf("Invalid input"); 
}
 return 0;
}


