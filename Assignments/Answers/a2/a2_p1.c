/*
CH-230-A
a2_p1.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
   
    double my_double1, my_double2;
    scanf("%lf %lf", &my_double1, &my_double2);

    int my_int1, my_int2;
    scanf("%d %d", &my_int1, &my_int2);

    char my_char1, my_char2;
    scanf(" %c", &my_char1);
    scanf(" %c", &my_char2); /* We add the space before %c to ignore leading whitespace characters (\n for example) */
    int sum = my_char1 + my_char2;
    int product = my_char1 * my_char2;


    printf("sum of doubles=%lf\n", my_double1 + my_double2);
    printf("difference of doubles=%lf\n", my_double1 - my_double2);
    printf("square=%lf\n", my_double1 * my_double1);
    

    printf("sum of integers=%d\n", my_int1 + my_int2);
    printf("product of integers=%d\n", my_int1 * my_int2);


    printf("sum of chars=%d\n", (sum));
    printf("product of chars=%d\n", (product));
    printf("sum of chars=%c\n", (sum));
    printf("product of chars=%c\n", (product));

}