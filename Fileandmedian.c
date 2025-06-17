#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int n);
int main(int argc, char *argv[])
{
    FILE *fp;
    int n,i, num;
    int arr[500];
    float median;

    if (argc<2)
    {
        printf("Enter filename please");
        return 1;
    }
    else if(argc == 2)
    {
        fp = fopen(argv[1], "w");
        if(fp == NULL)
        {
            printf("File could not be opened");
            return 1;
        }
        else
        {
            printf("Enter the number of integers\n");
            scanf("%d", &n);

            //Input the numbers in the file
            printf("Enter the integers\n");
            for(i = 0; i < n; i++)
            {
                scanf("%d", &num);
                fprintf(fp, "%d\n", num);
            }
            fclose(fp);

            //Store to array
            fp = fopen(argv[1], "r");
            if (fp == NULL)
            {
                printf("Error opening file for reading!\n");
                return 1;
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    if (fscanf(fp, "%d", &arr[i]) != 1)
                    {
                        printf("Error reading number from file.\n");
                        fclose(fp);
                        return 1;
                    }
                }
                fclose(fp);
            }

            //Sort the array
            bubbleSort(arr, n);

            //Print sorted array
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");

            // Calculate median
            if (n % 2 == 1)
            {
                median = arr[n / 2];
            }
            else
            {
                median = (arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
            }

            printf("Median: %.2f\n", median);
        }
    }
    return 0;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
