#include <stdio.h>

int main() {
    int a, b;
    char c;
    
   
    scanf("%d %d %c", &a, &b, &c);  // Fix: Added space before %c

    int d = a + b;
    int e = a * b;
    int f = a - b;
    int g = (b != 0) ? a / b : 0; // Prevent division by zero

    if (c == '+') {
        printf("%d", d);
    }
    else if (c == '-') {
        printf("%d", f);
    }
    else if (c == '*') {
        printf("%d", e);
    }
    else if (c == '/' && b != 0) {
        printf("%d", g);
    }
    else {
        printf("error");
    }

    return 0;
}
