/*
CH-230-A
a7_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


// Returns a positive value if the first number is larger than the second,
// a negative value if the second is larger and 0 if equal
int sort_ascend(const void* a, const void* b)
{
    const int* ptr_a = (const int*) a;
    const int* ptr_b = (const int*) b;

    if(*ptr_a > *ptr_b)
        return 1;

    else if(*ptr_a < *ptr_b)
        return -1;

    else
        return 0;
}

/* 
// Could type it this way. It does the same thing
int sort_ascend(const void* a, const void* b)
{
    return(*(int*)a - *(int*)b);
}
*/

// Returns a negatigve value if the first number is larger than the second,
// a positive value if the second is larger and 0 if equal
int sort_decend(const void* a, const void* b)
{
    const int* ptr_a = (const int*) a;
    const int* ptr_b = (const int*) b;

    if(*ptr_a > *ptr_b)
        return -1;

    else if(*ptr_a < *ptr_b)
        return 1;

    else
        return 0;
}

// Prints an array on stdout 
void print_array(int* arr, int nmemb)
{
    int i;
    for(i = 0; i < nmemb; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    // Number of values in the array
    int n;
    scanf(" %d", &n);

    // Allocate the array
    int* myArr = (int*)malloc(sizeof(int) * n);
    if(myArr == NULL)
    {
        printf("Error allocating memory...\n");
        exit(1);
    }

    // Read the array's values
    int i;
    for(i = 0; i < n; i++)
    {
        scanf(" %d", &myArr[i]);
    }

    char myChar;
    while(1)
    {
        scanf(" %c", &myChar);
        
        switch (myChar)
        {
        // Sort array in ascending order and print it out
        case 'a':
            qsort(myArr, n, sizeof(myArr[0]), sort_ascend);
            print_array(myArr, n);
            break;

        // Sort array in descending order and print it out
        case 'd':
            qsort(myArr, n, sizeof(myArr[0]), sort_decend);
            print_array(myArr, n);
            break;

        case 'e':
            exit(0);
            break;

        default:
            break;
        }
    }

}