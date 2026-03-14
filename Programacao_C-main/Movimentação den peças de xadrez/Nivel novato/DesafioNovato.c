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
    
    
}