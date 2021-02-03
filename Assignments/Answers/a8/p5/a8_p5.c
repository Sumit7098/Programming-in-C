/*
CH-230-A
a8_p5.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MYFILE "chars.txt"

int main()
{
    // Openn the input file for reading
    FILE *fin_ptr;
    fin_ptr = fopen(MYFILE, "r");
    if(!fin_ptr) /* Equivalent to (fin_ptr == NULL)*/
    {
        printf("Some error occured!\n");
        exit(1);
    }

    // Define and read two characters
    char myChar[2];

    fscanf(fin_ptr, " %c", &myChar[0]);
    fscanf(fin_ptr, " %c", &myChar[1]);

    // Create an output file
    FILE *fout_ptr;
    fout_ptr = fopen("codesum.txt", "w");
    if(!fout_ptr)
    {
        printf("Some error occured!\n");
        exit(1);
    }
    
    // Calculate and print the characters' ASCII sum
    fprintf(fout_ptr, "%d\n", myChar[0] + myChar[1]);

    // Close files
    fclose(fin_ptr);
    fclose(fout_ptr);

    return 0;
}