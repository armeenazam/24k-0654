#include <stdio.h>
void bubbleSort(int arr[], int size) {
    if (size == 1) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubbleSort(arr, size - 1);
}

int main() {
    int n;
    printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :");
	for (int i=0; i<n ;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Original array: ");
    for (int i=0; i<n ;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
