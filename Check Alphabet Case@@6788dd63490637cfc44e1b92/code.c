#include <stdio.h>

int main() {
    char ch;
    
    // Taking input
  
    scanf("%c", &ch);

    // Checking if the character is uppercase
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    
    // Checking if the character is lowercase
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    
    // If it's neither uppercase nor lowercase, it's not an alphabet
    else
        printf("Not an alphabet\n");

    return 0;
}
