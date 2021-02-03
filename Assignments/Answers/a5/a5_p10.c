/*
CH-230-A
a5_p9.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void recursive_print(int n){
    if(n == 1){
        printf("%d ", n);
        return;
    }
    else{
        printf("%d ", n);
        recursive_print(n - 1);
    }
}
int main(){
    // Read int from user
    int num;          
    scanf("%d", &num);    /*Input assumed positive*/ 

    recursive_print(num);

}