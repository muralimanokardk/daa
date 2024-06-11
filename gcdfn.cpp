#include <stdio.h>

int main() {
    int n;
    int arr[] = {10, 20, 15, 8, 12}; 
    n = sizeof(arr) / sizeof(arr[0]); 
    int largest = arr[0]; // Initialize with the first element

    for (int i = 1; i < n; ++i) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }

    printf("Largest element = %d \n", largest);

    return 0;
}

