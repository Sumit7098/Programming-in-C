/*
CH-230-A
a6_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Print a character's bin. representation backwards
void print_bin_backwards(unsigned char c)
{
	printf("The backwards binary representation is: ");
	// Compares every binary digit in c from right to left
	// and prints it out from left to right.
	// Shifts 1 unit to the right in each iteration and stops
	// when c becomes 0.
	while (c != 0)
	{
		printf("%c", (c & 1 ? '1' : '0'));
		c >>= 1;
	}
	printf("\n");
}

int main()
{
	// Define and read unsinged character
	unsigned char myChar;
	scanf(" %c", &myChar);

	// Calling the function
	printf("The decimal representation is: %d\n", myChar);
	print_bin_backwards(myChar);

	return 0;

}