#include<stdio.h>
void printArray(int arr [],int size)
{
	 if (size == 0) {
        return;
    }
    printf("%d ", arr[0]);
    printArray(arr + 1, size - 1);
}

int main()
{
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :");
	for (int i=0; i<n ;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Entered Array:\n");
	printArray(arr,n);
	return 0;
}