#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    int sum=0;
    printf("Enter the elements of array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        sum=sum + *(ptr+i);

    }
    printf("SUM : %d",sum);
}