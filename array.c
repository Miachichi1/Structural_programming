#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Create an array with elements in ascending order
    int size = 9;
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10};

    // Print the original array
    printf("Original Array: ");
    printArray(arr, size);

    // Omitting the middle element
    int omittedIndex = size / 2;
    int omittedValue = arr[omittedIndex];

    // Insert the omitted element
    int newSize = size + 1;
    int *newArr = (int *)malloc(newSize * sizeof(int)); // Allocate memory for newArr

    for (int i = 0, j = 0; i < newSize; i++) {
        if (i == omittedIndex) {
            newArr[i] = 4; // Insert the omitted element (in this case, 4)
        } else {
            newArr[i] = arr[j++];
        }
    }
    printf("Array after inserting element: ");
    printArray(newArr, newSize);

    // Delete the inserted element
    for (int i = 0, j = 0; i < size; i++) {
        if (i != omittedIndex) {
            arr[j++] = newArr[i];
        }
    }

    // Print the array after deleting the element
    printf("Array after deleting element: ");
    printArray(arr, size);

    free(newArr);

    return 0;
}
