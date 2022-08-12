#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3];

    for (int lin = 0; lin <= 2; lin++){
        for (int col = 0; col <= 2; col++){

        if(lin == col){
            m[lin][col] = 1;
        }
        else{
            m[lin][col] = 0;
        }

            printf("[%d]", m[lin][col]);
        }
    printf("\n");
}
}
