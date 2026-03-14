#include <stdio.h>

int main() {
    //Vetores com Loops aninhados
    int lista[4] = {1, 2, 3, 4};

    for (int i = 0; i <= 3; i++) {
        printf("O %dº elemento é: %d\n", i+1, lista[i]);
        for (int j = 0; j <= 10; j++) {
            printf("A tabuada do %d° elemento por %d é: %d\n", i+1, lista[i], lista[i]*j);
        }
    }

    //Matrizes com loops
    int matriz[10][10] = {
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {},
        {}
    };
    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j<= 10; j++) {
            matriz[i][j] = j;
            if (j == 2 || j == 4 || j == 6 || j == 8) {
                matriz[i][j] = 0;
            };
        };
    };
    for (int m = 0; m <= 10; m++ ) {
        printf("\n");
        for (int n = 0; n <= 10; n++) { 
            printf("%d ", matriz[m][n]);
        };
    };
}