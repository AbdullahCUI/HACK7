#include <stdio.h>
#include <stdlib.h>

// Function to check if array contains a specific element
int contains(const int *arr, int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return 1; // true
        }
    }
    return 0; // false
}

// Function to check if array contains an element within a given range
int containsWithin(const int *arr, int size, int x, int i, int j) {
    if (i < 0 || i >= size || j < 0 || j >= size || i > j) {
        return 0; // false, invalid indices
    }

    for (int k = i; k <= j; ++k) {
        if (arr[k] == x) {
            return 1; // true
        }
    }
    return 0; // false
}

// Function to create a padded copy of the array with a new size
int *paddedCopy(const int *arr, int oldSize, int newSize) {
    int *newArr = (int *)malloc(newSize * sizeof(int));

    // Copy elements up to the minimum of oldSize and newSize
    int minSize = (oldSize < newSize) ? oldSize : newSize;
    for (int i = 0; i < minSize; ++i) {
        newArr[i] = arr[i];
    }

    // Pad with zeros if newSize is greater than oldSize
    for (int i = oldSize; i < newSize; ++i) {
        newArr[i] = 0;
    }

    return newArr;
}

// 
void reverse(int *arr, int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        // Swap elements at positions i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Function to create a new array with elements in reverse order
int *reverseCopy(const int *arr, int size) {
    int *newArr = (int *)malloc(size * sizeof(int));
    
    for (int i = 0, j = size - 1; i < size; ++i, --j) {
        newArr[i] = arr[j];
    }

    return newArr;
}

int main() {
    int arr[] = {10, 15, 5, 25, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // contains
    printf("Contains 5: %d\n", contains(arr, size, 5));

    // containsWithin
    printf("Contains 15 within indices 1 and 3: %d\n", containsWithin(arr, size, 15, 1, 3));

    // paddedCopy
    int newSize = 8;
    int *paddedArr = paddedCopy(arr, size, newSize);
    printf("Padded Copy: ");
    for (int i = 0; i < newSize; ++i) {
        printf("%d ", paddedArr[i]);
    }



