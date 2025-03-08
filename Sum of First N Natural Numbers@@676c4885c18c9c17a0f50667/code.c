#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);  // Corrected scanf

    for (int i = 0; i < a; i++) {  // Outer loop runs 'a' times
        for (int j = 0; j <= i; j++) {  // Inner loop prints increasing pattern
            int sum = i + j;
            printf("%d ", sum);  // Space added for readability
        }
        printf("\n");  // New line for better formatting
    }

    return 0;
}
