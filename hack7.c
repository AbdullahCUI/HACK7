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
