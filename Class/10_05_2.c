//WAP to find out the sum of n elements of an integer array by using recursion 
#include <stdio.h>

int sum(int arr[], int n);

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Sum of elements: %d", sum(arr, n));
    return 0;
}

int sum(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return arr[n-1] + sum(arr, n-1);
    }
}