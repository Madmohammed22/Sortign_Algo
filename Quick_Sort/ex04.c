#include <unistd.h>
#include <stdio.h>
#include <string.h>

int partiom(int arr[], int size, int l, int r);
void quick_sort(int arr[], int l, int r);
void print(int arr[], int size);

int main()
{
    int arr[] = {6, 2, 4, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    quick_sort(arr, 0, size - 1);
    print(arr, size);
    return 0;
}

int partiom(int arr[], int size, int l, int r)
{
    int pivot = arr[l + (r - l) / 2];
    int i = l;
    int j = r;
    while (i < j)
    {
        // While dividing the array, the pivot element should be positioned
        // in such a way that elements less than pivot are kept on the left side
        while (arr[i] < pivot)
        {
            i++;
        }
        // Elements greater than pivot are on the right side of the pivot.
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return j;
}

void quick_sort(int arr[], int l, int r)
{
    int j;
    if (l < r)
    {
        j = partiom(arr, r, l, r);
        quick_sort(arr, l, j);
        quick_sort(arr, j + 1, r);
    }
}

void print(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d\t", arr[i]);
        i++;
    }
}
