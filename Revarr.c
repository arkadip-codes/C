#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter the number of terms of the array: ");
    scanf("%d",&n);
    int arr[200];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse of the array is:\n");
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}