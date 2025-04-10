#include<stdio.h>
int main()
{
    int n, i, a;
    printf("Enter the number of terms of the array: ");
    scanf("%d", &n);
    int arr[1000];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to delete from the Array :");
    scanf("%d", &a);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            for(int j = i; j < n; j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            printf("Array after deletion is: \n");
            for(i = 0; i < n; i++)
            {
            printf("%d\n", arr[i]);
            }
            break;
        }
        else
        {
            printf("Number not in this array");
            break;
        }
    }
    return 0;
}