#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, i, key, left, right, mid;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Binary Search
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    left = 0;
    right = n - 1;
    
    while (left <= right) {
        mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            free(arr);
            return 0;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    printf("Element not found\n");
    free(arr);
    return 0;
}