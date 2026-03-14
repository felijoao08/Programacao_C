#include <stdio.h>


int main() {
    //Inrodução a vetores e matrizes

    //Vetor(Array) 
    //Um vetor é basicamente um Array unidimencional(Um array é uma lista).
    int numeros[5] = { 1, 2, 3, 4, 5};
    printf("O segundo elemento é: %d", numeros[1]);


    //Matriz
    //Uma matriz pode ser unidimencional ou pode ter mais de uma dimensão
    //O acesso por dois indices(linha e coluna(Duas variaveis))
    int tabela[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {6, 7, 8}
    };
    printf("O elemento na posição 3 é: %d", tabela[3]);
}