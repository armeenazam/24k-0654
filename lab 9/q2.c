#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter 1st positive integer: ");
    scanf("%d", &num1);
    printf("Enter 2nd positive integer: ");
    scanf("%d", &num2);

    swapNumbers(&num1, &num2);

    printf("The value of num1 becomes: %d\n", num1);
    printf("The value of num2 becomes: %d\n", num2);

    return 0;
}
