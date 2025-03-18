#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle cases where K > N

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse the first K elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  // Rotate by 3 positions

   
    

    rotateArray(arr, n, k);

    
    printArray(arr, n);

    return 0;
}
