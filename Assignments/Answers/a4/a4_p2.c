/*
CH-230-A
a4_p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char read_string[50];
    fgets(read_string, 50, stdin);
    read_string[strcspn(read_string, "\n")] = '\0'; /* Remove the enter at the end */
    
    int i;
    for(i = 0; i < strlen(read_string); i++)
    {
        // If the position is even print character without space before 
        if(i % 2 == 0)
        {
            printf("%c\n",read_string[i]);
        }
        // If the position is odd print character with space before
        else
        {
            printf(" ");
            printf("%c\n", read_string[i]);
        }
        
    }
}
