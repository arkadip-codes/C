#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, rows, cols, trace = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    if (rows == cols) 
    {
        int **matrix = (int **)malloc(rows * sizeof(int *));
        for (i = 0; i < rows; i++) 
        {
            matrix[i] = (int *)malloc(cols * sizeof(int));
        }
        
        printf("Enter the elements of the matrix:\n");
        
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++) 
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        printf("The matrix is:\n");
        for (i = 0; i < rows; i++) 
        {
            for (j = 0; j < cols; j++) 
            {
                printf("%d ", matrix[i][j]);
                printf(" ");
            }
            printf("\n");
        }
        
        printf("The trace of the matrix are: ");
        for (i = 0; i < rows; i++) 
        {
            trace += matrix[i][i];
        }
        printf("%d\n", trace);
        
        for (i = 0; i < rows; i++) 
        {
            free(matrix[i]);
        }
        free(matrix);
    } 
    else 
    {
        printf("The matrix is not square, so the trace is not defined.\n");
    }
    return 0;
}