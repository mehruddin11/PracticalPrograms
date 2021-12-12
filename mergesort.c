#include <stdio.h>
#include <conio.h>

// merge
void Merge(int a[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            B[k++] = a[i++];
        }
        else
        {
            B[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        B[k++] = a[i++];
    }
    while (j <= high)
    {
        B[k++] = a[j++];
    }
    for (int i = 0; i <= high; i++)
    {
        a[i] = B[i];
    }
}
// merge sort
void MergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, mid, low, high);
    }
}

// print array

void PrintArray(int a[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[] = {1, 9, 7, 4, 2, 0, -3, 99};
    int n = 7;
    printf("before sorting array is : ");
    PrintArray(a, n);
    MergeSort(a, 0, n);
    printf("After Sorting array is : ");
    PrintArray(a, n);
}
