#include<stdio.h>

int findMajority(int arr[], int n) {
    int candidate = -1, count = 0;
    
    // Phase 1: Find potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else {
            count += (arr[i] == candidate) ? 1 : -1;
        }
    }
    
    // Phase 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }
    
    return (count > n/2) ? candidate : -1;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = findMajority(arr, n);
    printf("%d", result);
    return 0;
}
