#include <stdio.h>
#include <conio.h>

int Partion(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    int temp ;
    temp = a[low];
    a[low] = a[j];
    a[j] = a[low];
    return j;
}
void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int j;
        j = Partion(a, low, high);
        QuickSort(a, low, j - 1);  //left sub array
        QuickSort(a, j + 1, high); //right sub array
    }
}
void PrintArray(int a[], int n)
{
    for (int i; i <= n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}
int main()
{

    int a[] = {3, 4, 2, 9, 5, 1};
    int n = 5;
     
    PrintArray(a, n);
    printf("after sorting array is :");
    QuickSort(a, 0, n);
    PrintArray(a, n);
}
