#include <stdio.h>
#include <stdlib.h>


int main()
{
    int m[3][2];

 for(int i = 1; i <= 3; i++){
        for(int j = 1;j <= 2; j++){
            if(i == j){
                m[i][j] = 1;
            }
            else
                m[i][j] = (i*i);
        }
    }

    printf("  Matriz C \n");
    for(int i = 1; i <= 3; i++){
            for(int j = 1; j <= 2; j++){

                printf("[%d] " , m[i][j]);
            }
                printf("\n");
    }
    return 0;
}
