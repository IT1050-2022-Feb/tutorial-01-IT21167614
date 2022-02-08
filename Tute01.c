/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float avg;
	int Mark[2];
		printf("Enter Marks Subject 1 :");
		scanf("%d", &Mark[0]);
    printf("Enter Marks Subject 2 :");
		scanf("%d", &Mark[1]);

	avg = (Mark[0] + Mark[1])/ 2.00;
	printf("Average Is : %.2f\n", avg);
  return 0;
}


