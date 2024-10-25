#include <stdio.h>

int main() {
    char arr[100];
    int result = 0;
    int num = 0; 
    int sign = 1; 

    printf("Enter a string: ");
    scanf("%s", arr);


    for (int i = 0; arr[i] != '\0'; i++) {
        
        if (arr[i] >= '0' && arr[i] <= '9') {
            
            num = num * 10 + (arr[i] - '0');
        } else {
            
            result += sign * num;

            
            num = 0;

            
            if (arr[i] == '+') {
                sign = 1;
            } else if (arr[i] == '-') {
                sign = -1;
            } else {
                
                printf("Invalid expression\n");
                return 0;
            }
        }
    }
    
    
    result += sign * num;

    printf("Result is %d\n", result);
    return 0;
}

