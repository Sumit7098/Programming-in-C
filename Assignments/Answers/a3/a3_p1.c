/*
CH-230-A
a3_p1.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <stdio.h>
int main()
{
	float x;
	int n;
	scanf(" %f", &x);
	scanf(" %d", &n);
	
	//If the value entered is less or equal to 0, it'll enter the loop
	//and keep asking for a valid value till it's entered 
	while (n <= 0)
	{
		printf("Input is invalid, reenter value\n");
		scanf(" %d", &n);
	}

	for (int i = n; i > 0; i--)
	{
		printf("%f\n", x);
	}

}