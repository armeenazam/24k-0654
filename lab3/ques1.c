/*this output is wrong because the integer input does not define under integer data type because interger can hold values from-32,767 to 32,767.
Since,integer input value exceeds this range the output will have an error .To correct this error use data tupe double so, the code will become like this:*/

#include<stdio.h>
int main()
{
double testinteger=3000000000;
printf("Number is %lf",testinteger);
}
