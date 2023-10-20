// WAP to find the largest element stored in an array of n elements by using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    // Allocating memory for the array
    arr = (int *)malloc(n * sizeof(int));

    printf("\n Enter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    int largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }

    printf("\nThe largest element stored in the array is : %d", largest);

    free(arr);

    return 0;
}