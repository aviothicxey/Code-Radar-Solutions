#include <stdio.h>
#include <stdbool.h>
#include <math.h>  // Include math.h for sqrt()

bool isPrime(int num) {
  if (num <= 1) return false;
  if (num == 2) return true;
  if (num % 2 == 0) return false;

  // Use sqrt(num) instead of i * i to prevent overflow
  for (int i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0) return false;
  }

  return true;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if (isPrime(num)) {
    printf("True\n");  // Added newline for better output formatting
  } else {
    printf("False\n");
  }

  return 0;
}
