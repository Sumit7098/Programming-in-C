#pragma once
/*
 CH-230-A
 a7_p7.c
 Mahiem Agrawal
 m.agrawal@jacobs-university.de
 */

struct stack
{
    unsigned int count;
    int array[12];
};

void push(struct stack* list, int n);
void pop(struct stack* list);
void empty(struct stack* list);

void isEmpty(struct stack* list);