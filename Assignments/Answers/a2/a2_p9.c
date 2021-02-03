/*
CH-230-A
a2_p9.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char my_char;
    scanf(" %c", &my_char);

    // Check if the character is a letter
    if('A' <= my_char && my_char <= 'Z' || 'a' <= my_char && my_char <= 'z')
        printf("%c is a letter", my_char);
    // Check if the character is a digit
    else if('1' <= my_char && my_char <= '9')
        printf("%c is a digit", my_char);
    else
        printf("%c is some other symbol", my_char);
}