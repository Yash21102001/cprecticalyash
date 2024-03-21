#include <stdio.h>

int main() {
  int numbers[10];
  int smallest, i;

  // Get input for the 10 elements of the array
  printf("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &numbers[i]);
  }

  // Find the smallest element
  smallest = numbers[0];
  for (i = 1; i < 10; i++) {
    if (numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }

  // Print the smallest element
  printf("The smallest number is: %d\n", smallest);
   return 0;
}
