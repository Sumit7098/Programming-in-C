/*
CH-230-A
a6_p6.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// The position of last bit is less by one
// than the actual number of bits
const int maxbit = sizeof(unsigned char) * 8 - 1;

// Print a character's binary representation
void print_bin(unsigned char c)
{
	int i;
	printf("The binary representation is: ");
	// Check if bits are set or not from left to right
	// and print their value.
	for(i = maxbit; i >= 0; --i)
	{
		if (c & (1 << i))
			printf("1");
		else
			printf("0");

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
	print_bin(myChar);

	return 0;

}