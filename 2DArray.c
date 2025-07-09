#include<stdio.h>
#include<stdlib.h>
int main()
{
    //2D Array using Dynamic Memory Allocation in C
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    // Dynamic memory allocation for 2D array
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }
    
    // Input elements into the 2D array
    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Display the 2D array
    printf("The 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}