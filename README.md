# Sorting Algorithms in C

This repository contains implementations of various sorting algorithms in C. The algorithms included are Bubble Sort, Insertion Sort, Merge Sort, Quick Sort, and Selection Sort. Each algorithm sorts an array of numbers in ascending order.

## Algorithm Descriptions

### Bubble Sort
Bubble Sort works by repeatedly swapping adjacent elements if they are in the wrong order. The algorithm passes through the array multiple times, each time pushing the largest unsorted element to the end.

### Insertion Sort
Insertion Sort builds the final sorted array one item at a time. It takes each element from the input array and inserts it into its correct position in the sorted portion of the array.

### Merge Sort
Merge Sort follows a divide-and-conquer strategy. It divides the array into two halves, sorts them independently, and then merges the two sorted halves to produce a sorted array.

### Quick Sort
Quick Sort also follows a divide-and-conquer approach. It selects a pivot element and partitions the array into two sub-arrays, one with elements smaller than the pivot and the other with elements larger than the pivot. It then recursively sorts the two sub-arrays.

### Selection Sort
Selection Sort repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the element at the beginning of the unsorted portion.

## How to Use

To use the sorting algorithms, follow these steps:

1. Clone the repository to your local machine or download the source code.
2. Open the `sorting_algorithms.c` file.
3. Modify the array variable with the desired array of numbers to be sorted.
4. Uncomment the sorting algorithm you want to use and comment out the others.
5. Compile and run the program.
6. Observe the sorted array as the output.

## Performance

The time complexity and space complexity of each algorithm are as follows:

- Bubble Sort: Time - O(n^2), Space - O(1)
- Insertion Sort: Time - O(n^2), Space - O(1)
- Merge Sort: Time - O(n log n), Space - O(n)
- Quick Sort: Time - O(n log n) average, O(n^2) worst case, Space - O(log n)
- Selection Sort: Time - O(n^2), Space - O(1)

The algorithms perform well for small to medium-sized arrays, but some algorithms like Bubble Sort and Insertion Sort may have performance issues for larger arrays.

## Contributing

Contributions to improve the efficiency, readability, or add support for other sorting algorithms in C are welcome. To contribute, follow these steps:

1. Fork the repository.
2. Make your desired changes.
3. Submit a pull request describing the changes you made.
