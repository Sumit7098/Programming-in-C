/*
CH-230-A
a7_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[30];
    int age;
};

void set_persons_info(struct person* user)
{
    fgets(user->name, 30, stdin);
    scanf("%d", &user->age);
}


int main()
{
    int numOfPersons;
    scanf(" %d", &numOfPersons);

    // Define an array of persons
    struct person* personsArr = (struct person*)malloc(sizeof(struct person) * numOfPersons)
    if(personsArr == NULL)
    {
        printf("Error allocating memory...");
        exit(1);
    }


}