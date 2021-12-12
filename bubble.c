#include <stdio.h>
#include <conio.h>

void BubbleSort(int a[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}

void main()
{
    int a[] = {1, 9, 7, 4, 2, 0, -3, 99};
    int n = 7;
    printf("before Sorting Array is : ");
    printArray(a, n);
    printf("After Sorting Array is : ");
    BubbleSort(a, n);
    printArray(a, n);
}
