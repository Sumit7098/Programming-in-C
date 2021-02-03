/*
CH-230-A
a6_p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// The position of last bit is less by one
// than the actual number of bits
const int maxbit = sizeof(unsigned char) * 8 - 1;
char binCharStr[sizeof(unsigned char) * 8 + 1];

// Returns a character's binary representation
char* make_bin(unsigned char c, char str[])
{
	int i;
	// Check if bits are set or not from left to right
	// and print their value.
	for (i = 0; i <= maxbit; i++)
	{
		if (c & (1 << i))
			str[maxbit - i] = '1';
		else
			str[maxbit - i] = '0';

	}
	return str;
}

// Sets bits in 3 positions for a given character
void set3bits(unsigned char c, char* str, int pos1, int pos2, int pos3)
{
	make_bin(c, str);
	if (str[(maxbit - pos1)] == '0')
		str[(maxbit - pos1)] = '1';

	if (str[(maxbit - pos2)] == '0')
		str[(maxbit - pos2)] = '1';

	if (str[(maxbit - pos3)] == '0')
		str[(maxbit - pos3)] = '1';

}

int main()
{
	// Define and read unsinged character
	unsigned char myChar;
	scanf(" %c", &myChar);

	// Define and read 3 position values
	int n1, n2, n3;
	scanf(" %d %d %d", &n1, &n2, &n3);

	// Character in decimal
	printf("The decimal representation is: %d\n", myChar);

	// Character in binary
	printf("The binary representation is: %s\n", make_bin(myChar, binCharStr));
	
	// Calling set3bits function
	set3bits(myChar, binCharStr, n1, n2, n3);
	printf("After setting the bits: %s\n", binCharStr);

	return 0;

}