#include <stdio.h>
#include <string.h>

/*
Algorithm : Bubble_Sort(int a[], n)
{
    int swapped, i, j;
    for (i = 0; i < n; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

*/

void Bubble_Sort(int arr[], int length);
void swap(int *xp, int *yp);
void printArray(int arr[], int length);
int read_File();

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int length = sizeof(arr) / sizeof(int);
    Bubble_Sort(arr, length);
    return (0);
}

void Bubble_Sort(int arr[], int length)
{
    int i, j, swapped;
    i = 0;
    while (i < length)
    {
        swapped = 0;
        j = 0;
        while (j < length - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
            j++;
        }
        i++;
        if (swapped == 0)
        {
            break;
        }
    }
    printArray(arr, length);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int length)
{
    int i = 0;
    while (i < length)
    {
        printf("%d\t", arr[i]);
        i++;
    }
    printf("\n");
}

int read_File()
{
    FILE *file_to_read = fopen("Bubble_Sort.txt", "r");
    if (file_to_read == NULL)
    {
        printf("Failed to open the file.\n");
        return (1);
    }
    int n;
    while ((n = fgetc(file_to_read)) != EOF)
    {
        printf("%c", n);
    }
    fclose(file_to_read);
}