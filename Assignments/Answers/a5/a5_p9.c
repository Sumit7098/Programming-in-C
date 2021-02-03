/*
CH-230-A
a5_p9.c
Qais Qamhia
qqamhia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void read_elements3D(int ***a, int r, int c, int d){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int k = 0; k < d; k++){
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

void print_2Dsections(int ***a, int r, int c, int d){
    for(int k = 0; k < d; k++){
        printf("Section %d:\n", k+1);
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
    }
}

int main(){
    // Read dimensions from user
    int row, col, dep; 
    scanf("%d", &row);
    scanf("%d", &col);
    scanf("%d", &dep);

    // Defining a 3D-Array
    int*** myMatrix = (int***)malloc(sizeof(int**) * row);
    if(!myMatrix)
        exit(1);

    for(int i = 0; i < row; i++){
        myMatrix[i] = (int**)malloc(sizeof(int**) * col);
        if(myMatrix[i] == NULL)
            exit(1);
    }
    
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            myMatrix[i][j] = (int*)malloc(sizeof(int) * dep);
            if(myMatrix[i][j] == NULL)
                exit(1);
        }
    }

    read_elements3D(myMatrix, row, col, dep);
    print_2Dsections(myMatrix, row, col, dep);

}