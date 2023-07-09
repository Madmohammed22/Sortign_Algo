#include <stdio.h>
#include <string.h>

/*
Algorithm : Merge_Sort(A, p, r)
{
    if (l < r)
    q = [(p + r) / 2];
    Merge_Sort(A, l, m);
    Merge_Sort(A, m + 1, r);
    merge(A, l, m, r);
}

//-----------------------
Algorithm:
merge(A, p, q, r)
{
  n1= q-p+1
  n2= r-q
  Let L[1:n+1] and R[1:n2+1] be new arrays
  for (i=1:n1)
    L[i]= A[p+i-1]
  for (j=1:n2)
    R[j]= A[q+j]
  L[n1 + 1]= infinity
  R[n2 + 1]= infinity
  i=1, j=1
  for (k=p:r)
  {
    if (L[i] <= R[j])
      A[k] = L[i]
      i= i+1
    else
      A[k] = R[j]
      j= j+1
  }
}
*/

//--------------
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r);
void printArray(int A[], int size);
int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    int i = 0;
    while (i < n1)
    {

        L[i] = arr[l + i];
        i++;
    }
    int j = 0;
    while (j < n2)
    {
        R[j] = arr[m + 1 + j];
        j++;
    }

    /* Merge the temp arrays back into arr[l..r]*/
    int k = l; // Initial index of merged subarray
    i = 0;     // Initial index of first subarray
    j = 0;     // Initial index of second subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", A[i]);
        i++;
    }
    printf("\n");
}
