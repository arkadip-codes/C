#include<stdio.h>
#include<stdlib.h>
int main(){
    int row, col, i, j;
    printf("Enter the rows amd columns : ");
    scanf("%d %d", &row, &col);
    
    int **mat1 = (int **)malloc(row * sizeof(int *));
    int **mat2 = (int **)malloc(row * sizeof(int *));
    int **sum = (int **)malloc(row * sizeof(int *));
    
    for(i=0;i<row;i++)
    {
                      mat1[i]=(int *)malloc(col * sizeof(int));
                      mat2[i]=(int *)malloc(col * sizeof(int));
                      sum[i]=(int *)malloc(col * sizeof(int));               
    }
    
    printf("Enter the first matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
                          scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter the second matrix : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
                          scanf("%d", &mat2[i][j]);
        }
    }
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
                          sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    printf("Sum is : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
                          printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<row;i++)
    {
                      free(mat1[i]);
                      free(mat2[i]);
                      free(sum[i]);
    }
    free(mat1);
    free(mat2);
    free(sum);
    return 0;
}