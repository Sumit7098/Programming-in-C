/*
CH-230-A
a5_p3.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int count_lower(char* str)
{
    int count = 0;
    char* ptr_str = str; 

    // Check the characters till we get to 'enter'
    // Increment count if character is lowercase letter
    while(*ptr_str != '\n')
    {
        if(*ptr_str >= 'a' && *ptr_str <= 'z')
        {
            count++;
        }
        ptr_str++; 
    }
    
    return count;
}

int main()
{
    char my_string[50];

    // Keep reading Strings until an empty string is entered
    while(1)
    {
        fgets(my_string, 50, stdin);
        if(my_string[0] == '\n')
            break;
        else
        {
            int count = count_lower(my_string);
            printf("The number of lowercase charactes is: %d\n", count);

        }
        
    }
    
}