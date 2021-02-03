/*
CH-230-A
a3_p4.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

int position(char str[], char c)
{
    int idx = 0, i; /* Initialize index outside of the loop */
    /* Loop until end of string */
    // Changes in values in the loop arguments are restricted to inside that loop.They disappear once we exit it
    for (i = 0; str[i] != c && str[i] != '\0'; ++i)
    {
        ++idx;
    }

/* 
    //We could also keep the same variable
    int idx = 0; 
    for (; str[idx] != c && str[idx] != '\0'; ++idx)
    {
        ++idx;
    }
*/
    return idx;
}
    int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}