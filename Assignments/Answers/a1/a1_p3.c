/*
CH-230-A
a1_p3.c
Qais Qamhia
q.qamhia@jacobs-university.de
*/

#include <stdio.h> /* Must put # before include to call the library*/

int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5; /* Using int here would make us lose the decimal value of the number (0.5) */
result = a / b;
printf("The result is %f\n", result); /* We print floats using %f, if we use %d it causes errors */
return 0;
}