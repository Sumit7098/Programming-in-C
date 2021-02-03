/*
CH-230-A
a3_p7.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c)
{
    // Print out n rows
    for (int i = 0; i < n; i++)
    {
        // Print out m + i elements in each row
        // Last iteration it will have the value j < m + n - 1
        for (int j = 0; j < m + i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main ()
{
    int n, m;
    scanf(" %d %d", &n, &m);
    
    char c;
    scanf(" %c", &c);

    print_form(n, m, c);

    return 0;
}