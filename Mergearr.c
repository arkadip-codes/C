#include<stdio.h>
int main()
{
    int n1, n2, i, j, k;
    printf("Enter the number of terms of the first array: ");
    scanf("%d", &n1);
    int arr1[1000];
    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of terms of the second array: ");
    scanf("%d", &n2);
    int arr2[1000];
    printf("Enter the elements of the second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[2000];
    for(i = 0; i < n1; i++)
    {
        arr3[i] = arr1[i];
    }
    for(j = 0; j < n2; j++)
    {
        arr3[i] = arr2[j];
        i++;
    }
    printf("Merged array is:\n");
    for(k = 0; k < n1 + n2; k++)
    {
        printf("%d\n", arr3[k]);
    }
    return 0;
}