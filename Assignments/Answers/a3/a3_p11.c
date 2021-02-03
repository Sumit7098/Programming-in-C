/*
CH-230-A
a3_p11.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Declare and read the strings
    char one[50], two[50];

    // strcspn takes two strings, and counts the number of characters in the first string until we reach the second
    // This number will represent the index of the \n element
    // I then turn that element into null to get rid of the new line character
    fgets(one, 50, stdin);
    one[strcspn(one, "\n")] = '\0';


    fgets(two, 50, stdin);
    two[strcspn(two, "\n")] = '\0';
    

    // Read a character
    char c;
    scanf(" %c", &c);


    // Print the lenght of both strings
    printf("length1=%ld\n", strlen(one));
    printf("length2=%ld\n", strlen(two));


    // Print the concatenation of both strings
    char string_cat[100];
    strcpy(string_cat, one);
    strcat(string_cat, two);
    printf("concatenation=%s\n", string_cat);


    // Copy the second string into a new third string
    char two_cpy[50];
    printf("copy=%s\n", strcpy(two_cpy, two));


    // Compare the two strings
    int cmp_val = strcmp(one, two);

    if(cmp_val < 0)
    {
        printf("one is smaller than two\n");
    }
    else if(cmp_val > 0)
    {
        printf("one is larger than two\n");
    }
    else
    {
        printf("one is equal to two\n");
    }
    

    // Find the first occurance of c in two
    
    for (int i = 0; i < strlen(two); i++)
	{
		if (two[i] == c)
		{
			printf("position=%d\n", i);
			break;
		}
		else if (i == (strlen(two)-1))
			printf("The character is not in the string\n");
		
	}

}