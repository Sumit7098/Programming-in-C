/*
CH-230-A
a3_p2.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>

int main()
{
  // Define and read a character
  char my_char;
  printf("Enter a lowercase character:");
  scanf(" %c", &my_char);

  // Define and read a number
  int my_num;
  printf("Enter a number:");
  scanf(" %d", &my_num);

  int i;
  // Prints my_num worth of characters before the entered character
  for(i = 1; i <= my_num; i++)
  {
    printf("%c\t", my_char - i);
  }
}