#include<stdio.h>
void swaped(int *aPtr ,int *bPtr ,int *cPtr){
    int temp=*bPtr;
    *bPtr=*aPtr;
    *aPtr=*cPtr;
    *aPtr=temp;



}
int main()
{
    int a,b,c;
    printf("Enter the values of a ,b ,c :\n");
    scanf("%d %d %d",&a,&b,&c);

    swaped(&a,&b,&c);
    printf("The value of a becomes: %d\n", a);
    printf("The value of b becomes: %d\n", b);
    printf("The value of c becomes: %d\n", c);


}