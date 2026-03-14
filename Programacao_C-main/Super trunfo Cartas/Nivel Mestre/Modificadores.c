/*
MODIFICADORES

São usados para alterar as propriedades dos tipos de dados primitivos, 
permitindo uma manipulação mais precisa e eficiente das variáveis.
Os modificadores de tipos de dados permitem que você controle melhor como os dados são armazenados e manipulados no programa. 
Em C, os modificadores mais comuns são unsigned e long.
Veja a diferença a seguir.

- Modificador unsigned: É usado para declarar variáveis que podem armazenar apenas valores positivos (incluindo zero).

- Modificador long: É usado para aumentar a capacidade de armazenamento dos tipos de dados primitivos.
  Ele pode ser aplicado a int e double, permitindo armazenar valores maiores e com maior precisão.

*/


#include <stdio.h>


void unsignedd() {
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
 
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}


 
void longg() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
}

int main() {
    unsignedd();
    longg();

    return 0;
}