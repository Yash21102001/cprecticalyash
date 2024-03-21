#include <stdio.h>

int reverse_number(int num) {
  int reversed = 0;
  while (num != 0) {
    int digit = num % 10;
    reversed = reversed * 10 + digit;
    num /= 10;
  }
  return reversed;
}

int main() {
  int number;
  printf("Enter a 3-digit number: ");
  scanf("%d", &number);

  int reversed_number = reverse_number(number);

  printf("The reversed number is: %d\n", reversed_number);

  return 0;
}