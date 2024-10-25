#include <stdio.h>

int main() {
    char str[50];  
    int len, i, count = 1;

    printf("Enter length of string: ");
    scanf("%d", &len);  

    printf("Enter a string: ");
    scanf("%s", str);  
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            count = 0;
            printf("The string is not a palindrome.\n");
            break;
        }
    }

    if(count == 1) {
        printf("The string is a palindrome.\n");
    }

    return 0;
    //wasted 1 hour!!!!! just because of a silly bracket
}

