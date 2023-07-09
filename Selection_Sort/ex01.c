#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/*
Algorithm:
void SelectionSort (int a[], int n)
{
 int i,j, temp, min;
 for (i=0; i<n-1; i++)
 {
    min = i;
    for (j=i+1; j<n; j++)
      if (a[j] < a[min])
      {
        min = j;
      }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
 }
}
*/

void SelectionSort(int arr[], int length);
void swap(int *xp, int *yp);
void printArray(int arr[], int length);
int read_File();
int main()
{
    int arr[] = {20, 12, 10, 15, 2};
    int length = sizeof(arr) / sizeof(int);
    SelectionSort(arr, length);
    printArray(arr, length);
    return (0);
}

void SelectionSort(int arr[], int length)
{
    int i, j, min;
    i = 0;
    while (i < length - 1)
    {
        min = i;
        j = i + 1;
        while (j < length)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            j++;
        }
        swap(&arr[min], &arr[i]);
        i++;
    }
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
    FILE *file_to_read = fopen("Selection-sort.txt", "r");
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