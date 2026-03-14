#include <stdio.h>

int main() {
    //Desafio Nível Novato: Posicionado Navios no Tabuleiro

    //Tabuleiro: Uma matriz(Array bidimencional 10x10)
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    //Navios: Dois vetores unidimencionais 

    //Navio 1: Vertical
    int navio1[3] = {3, 3, 3};

    //Navio 2: Vertical
    int navio2[3] = {3, 3, 3};

    //Colocando Navio1 no tabuleiro
    if (tabuleiro[0][0] == 0 && tabuleiro[1][0] == 0 && tabuleiro[2][0] == 0) {
        tabuleiro[0][0] = navio1[0];
        tabuleiro[1][0] = navio1[1];
        tabuleiro[2][0] = navio1[2];
    }

    //Colocando Navio2 no tabuleiro
    if (tabuleiro[0][9] == 0 && tabuleiro[0][8] == 0 && tabuleiro[0][7] == 0) {
        tabuleiro[0][9] = navio2[0];
        tabuleiro[0][8] = navio2[1];
        tabuleiro[0][7] = navio2[2];
    }

    //Mostrando tabuleiro utilizando loops aninhados
    for (int i = 0; i < 10; i++) {
        printf("\n");
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        
        }
    }

}