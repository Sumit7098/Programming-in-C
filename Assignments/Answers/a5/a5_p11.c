/*
CH-230-A
a5_p11.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int is_prime(int n);
int i; // Declare as global variable

int main(){
    int n;
    scanf("%d", &n);

    i = n / 2;
    if(is_prime(n)){
        printf("%d is a prime", n);
    }
    else{
        printf("%d is not a prime", n);
    }
    
}

int is_prime(int n){
    if(i == 1)
        return 1;

    else if(n % i == 0)
        return 0;
    
    else{
        i -= 1;
        is_prime(n);
    }
    
}