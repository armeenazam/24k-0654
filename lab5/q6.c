#include <stdio.h>;
int main()
{
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    printf("Value of x:%d",x);
    return 0;
}
/*The output will be 30 because of operator precedence. Firstly, it checks first condition which is false so it move towards else statement. In else block it will check 2<5 first because according to operator precedence <,> comes before == and != ,since 2 < 5 is true so it gives 1 which is equal to 1 so this whole condition becomes and the output becomes 30