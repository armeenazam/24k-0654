#include<stdio.h>
#include<stdlib.h>
int findLargest(int arr[],int n2){
    int max=arr[0];
    for(int i=0 ; i<n2 ; i++ )
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
return max;
}
int main()
{   
    int n1;
    printf("Enter the size of array :");
    scanf("%d",&n1);
    int *arr = (int*) calloc(n1,sizeof(int));
    printf("Enter the elements of array :");
    for(int i=0 ; i<n1 ; i++ )
    {
        scanf("%d",&*(arr+i));
    }
    printf("Old array:\n"); 
    for(int i=0 ; i<n1 ; i++ )
    {
        printf("%d\n",*(arr+i));
    }

    int n2;
    printf("\nEnter the size to resize array :");
    scanf("%d",&n2);
    arr = (int*) realloc(arr,n2*sizeof(int));
    printf("Enter the new elements of array :");
    for(int i=n1 ; i<n2 ; i++ )
    {
        scanf("%d",&*(arr+i));
    }
    printf("Resized array:\n");
    for(int i=0 ; i<n2 ; i++ )
    {
        printf("%d\n",*(arr+i));
    }
   
    printf("\nLargest element in array: %d", findLargest(arr ,n2));
     
    free(arr); 
}