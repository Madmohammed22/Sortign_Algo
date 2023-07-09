#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
Algorithm:
Insertion-Sort(A)
{
 for j=i to A.length
     key = A[i];
     // insert A[i] into sorted sequence A[1,2,3,..,i-1]
     j= i-1;
     while (j>0 and A[j]>key)
         A[j+1] = A[j]
         j= j-1
     A[j+1] = key
}
*/

void Insertion_Sort(int arr[], int length);
void printArray(int arr[], int length);
int read_File();
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int length = sizeof(arr) / sizeof(int);
    Insertion_Sort(arr, length);
    printArray(arr, length);
    return (0);
}

void Insertion_Sort(int arr[], int length)
{
    int j, key;
    int i = 1;
    while (i < length)
    {
        key = arr[i]; /* Move elements of arr[0..i-1], that are greater than key, to one position ahead
                         of their current position */
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        i++;
    }
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
    FILE *file_to_read = fopen("Insertion_Sort.txt", "r");
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