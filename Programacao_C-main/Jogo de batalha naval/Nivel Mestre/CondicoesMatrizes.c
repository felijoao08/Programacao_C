#include <stdio.h>

int main () {
    //Matriz
    int matriz[5][5] = {
        {},
        {},
        {},
        {},
        {}
    };

    //condiçao de preencher
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            if (j % 2 == 0) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }           
        }
    }
    for (int x = 0; x <= 4; x++) {
        printf("\n");
        for (int y = 0; y <= 4; y++) {
            printf("%d ", matriz[x][y]);
        }
    }
}

