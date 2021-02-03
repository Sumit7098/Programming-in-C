/*
CH-230-A
a4_p12.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Replace every occurrance of one character with another
void replaceAll(char *str, char c, char e)
{
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            str[i] = e;
        }
    }
}

int main()
{
    char charSrch, charSub;

    char* input = (char*)malloc(sizeof(char) * 80);
    if(input == NULL)
        exit(1);

    while(1)
    {
        printf("Enter a string:");
        fgets(input, 80, stdin);
        

        if(strcmp(input,"stop") == 0 )
        {
            printf("Exiting program ...");
            exit(0);
        }
        else
        {
            printf("Enter a character to replace: ");
            scanf(" %c", &charSrch);

            printf("Enter a character to replace with: ");
            scanf(" %c", &charSub);

            printf("The string is: %s\n", input);
            printf("The character to replace is: %c\n", charSrch);
            printf("The character to replace it with is: %c\n", charSub);

            replaceAll(input, charSrch, charSub);
            printf("The new string is: %s\n", input);
        }


    }
    free(input);
}