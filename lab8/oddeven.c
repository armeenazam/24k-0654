#include <stdio.h>

int main() {
    int start_num, n;
    printf("Enter the starting number: ");
    scanf("%d", &start_num);
    printf("Enter the number of pairs: ");
    scanf("%d", &n);
    int arr[2][n][2];
    int even, odd;
     if (start_num % 2 == 0) {
        even = start_num;
        odd = start_num - 1;
    } else {
        odd = start_num;
        even = start_num - 1;
    }
    int i;
    for (i = 0; i < n; i++) {
        arr[0][i][0] = even;
        arr[0][i][1] = even - 2;
        even=even-4;
        arr[1][i][0] = odd;
        arr[1][i][1] = odd - 2;
        odd=odd-4;  
    }
    printf("Even numbers:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[0][i][0], arr[0][i][1]);
    }
    printf("Odd numbers:\n");
    for ( i = 0; i < n; i++)
    {
        printf("[%d %d]\n", arr[1][i][0], arr[1][i][1]);
    }

    return 0;
}

