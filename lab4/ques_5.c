#include<stdio.h>
int main()
{
char cr;
printf("Enter a character:");
scanf(" %c",&cr);
if(cr>='a' && cr<='z'){
printf(" %c is a small alphabet",cr);}
else if(cr>='A' && cr<='Z'){
printf(" %c is a capital alphabet",cr);}
else if(cr>='0' && cr<='9'){
printf(" %c is a digit",cr);}
else{
printf(" %c is a special character",cr);}
return 0;
}