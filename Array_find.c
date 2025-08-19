#include <stdio.h>

int main() {
    int n, i, k, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        if(arr[i] == k) {
            printf("Element %d found at index %d.\n", k, i);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element %d not found in the array.\n", k);
    }

    return 0;
}