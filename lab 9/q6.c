#include <stdio.h>

void min_max(int arr[], int size, int *min, int *max) {
    *min = 999;
    *max = -999;

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int min, max;
    int size,i;
	printf("Enter the size of array :");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the elements of array :");
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

    min_max(arr, size, &min, &max);

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
