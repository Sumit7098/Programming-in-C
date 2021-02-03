/*
 CH-230-A
 a8_p4.c
 Mahiem Agrawal
 m.agrawal@jacobs-university.de
 */
#include "stack.h" 
#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int n;
    scanf_s("%d", &n);
    struct stack* list;
    list = (struct stack*)malloc(sizeof(struct stack));
    unsigned temp = n;
    while (n != 0)
    {
        push(list, n % 2);
        n = n / 2;

    }
    printf("The binary representation of %d is ", temp);
    empty(list);
    return 0;
}