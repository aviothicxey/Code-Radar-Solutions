#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
  // 0 and 1 are not prime numbers
  if (num <= 1) return false;
  
  // 2 is the only even prime number
  if (num == 2) return true;
  
  // Any even number greater than 2 is not prime
  if (num % 2 == 0) return false;
  
  // Check divisibility from 3 to sqrt(num)
  for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0) return false;
  }
  
  return true;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  
  if (isPrime(num)) {
    printf("True");
  } else {
    printf("False");
  }
  
  return 0;
}