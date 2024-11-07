#include <stdio.h>
#include <string.h>

void sort_by_first_char(char arr[][100], int row) {
    char temp[100];
    for (int i = 0; i < row - 1; i++) {
        for (int j = i + 1; j < row; j++) {
            if (arr[i][0] > arr[j][0]) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    getchar();
    

    char arr[n][100];
    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        gets(arr[i]);
    }

    sort_by_first_char(arr, n);

    printf("\nSorted words by first character:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
//time waste : 3 hrs

