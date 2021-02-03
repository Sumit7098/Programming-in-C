/*
CH-230-A
a6_p3.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// Find the max. value
#define MAX_VAL(A, B, C) {((A) > (B) ? ((A) > (C) ? (A) : (C)) : ((B) > (C) ? (B) : (C)));} /* semi-colon needed here, because I didn't call the function individually in main */

// Find the min. value
#define MIN_VAL(A, B, C) {((A) < (B) ? ((A) < (C) ? (A) : (C) ): ((B) < (C) ? (B) : (C)));}

// Find mid-range of three values
#define MID_RANGE(A, B, C) {((MIN_VAL(A, B, C)) + (MAX_VAL(A, B, C))) / 2.0}

int main()
{
    
    int myInt1, myInt2, myInt3;
    scanf(" %d %d %d", &myInt1, &myInt2, &myInt3);


    float midRange = MID_RANGE(myInt1, myInt2, myInt3);
    printf("The mid-range is: %0.6f", midRange);

    return 0;

}