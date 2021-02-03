/*
CH-230-A
a4_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[])
{
    // Define a list of characters for vowels
    char vowel[] = { 'a', 'o', 'e', 'i', 'u', 'A', 'O', 'E', 'I', 'U' };
    char *ptr_string = str; /* To walk the string */
    int i, count = 0, flag = 0;

    // Loop starts at the beginning of the string, and stops when we press 'enter'
    // Check if each character is a vowel or space, count it otherwise
    while(*ptr_string != '\n')
    {
        for (i = 0; i < 10; i++)
        {
            if (*ptr_string == vowel[i] || *ptr_string == ' ')
            {
                flag = 1;
                break;
            }
        }

        ptr_string++; /* Change the address in the pointer to walk through all the characters */

        // The character checked is a consonant
        if (flag == 0)
            count++;
        // The character checked is a vowel or a space
        else if(flag == 1)
            flag = 0;

    }
    return count;
}

int main()
{
    int consonants;
    char read_string[100];

    // Keep reading new strings until an empty string is entered
    while (1)
    {
        fgets(read_string, 100, stdin);

        if(read_string[0] != '\n')
        {
            consonants = count_consonants(read_string);
            printf("Number of consonants=%d\n", consonants);
        }
        else
            break;
        
    }
    return 0;
}