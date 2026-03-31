#include <stdio.h>


int main() {
    //Peça de xadrez Torre
    int torreCasas = 5;
    for (torreCasas ; torreCasas > 0 ; torreCasas--) {
        printf("Direita\n");
    }

    //Peça de xadrez Bispo
    int bispoCasas = 5;
    while (bispoCasas > 0)
    {
        printf("Direita, cimaz\n");
        bispoCasas--;
    }

    //Peça de xadrez Rainha
    int rainhaCasas = 8;
    do
    {
        printf("Esquerda\n");
        rainhaCasas--;
    } while (rainhaCasas > 0);

    //Peça de xadrez Cavalo
    int cavaloCasas1;
    int cavaloCasas2;

    for (int i = 1; i<=2; i++) {
        printf("Baixo cavalo\n");
        if (i == 2) {
            for (int j = 1; j<=1; j++) {
                printf("Esquerda cavalo\n");
            }
            
        }
    }
    
}