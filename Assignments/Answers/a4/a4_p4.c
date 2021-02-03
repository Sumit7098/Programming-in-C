/*
CH-230-A
a4_p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[])
{
    // Define a list of characters for vowels
    char vowel[] = { 'a', 'o', 'e', 'i', 'u', 'A', 'O', 'E', 'I', 'U' };
    
    // Walk the string, make flag = 1 if character is not a constant
    int i, j, count = 0, flag = 0;
    for (i = 0; i < strlen(str); i++)
    {
        for (j = 0; j < 10; j++)
        {
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
                if (str[i] == vowel[j])
                {
                    flag = 1;
                    break;
                }
                else
                {
                    continue;
                }
                
            }
            else if(str[i] == ' ' || str[i] == '\n')
            {
                flag = 1;
                break;
            }
            else
            {
               flag = 1;
                break; 
            }
            
            
            
        }
        // Case: character is not a consonant
        if (flag == 1)
            flag = 0; /* Reset flag*/
        
        // Case: character is a consonant
        else if (flag == 0)
            count++;
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

        if (read_string[0] != '\n')
        {
            consonants = count_consonants(read_string);
            printf("Number of consonants=%d\n", consonants);
        }
        else
            break;

    }
    return 0;
}