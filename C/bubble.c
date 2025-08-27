#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    // Outer loop runs n-1 times
    for (i = 0; i < n-1; i++) {
        swapped = 0;  // Initialize swapped as false

        // Inner loop for comparing adjacent elements
        for (j = 0; j < n-i-1; j++) {
            // If current element is greater than next element, swap them
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;  // Set swapped as true
            }
        }

        // If no elements were swapped, array is sorted, so break
        if (swapped == 0)
            break;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function to test the bubble sort
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);  // Determine number of elements in the array

    printf("Unsorted array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
