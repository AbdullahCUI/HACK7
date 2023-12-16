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

