/*
CH-230-A
a2_p8.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{   
    int my_num;
    scanf(" %d", &my_num);

    // Check if the number is divisible by 2 and 7
    if(my_num % 2 == 0 && my_num % 7 == 0)
        printf("The number is divisible by 2 and 7");
    else
        printf("The number is NOT divisible by 2 and 7");
    
}
