#include <stdio.h>


int main() {
    int idade = 16;
    int resultado;

    //Condiçao ? verdadeiro : falso; 
    resultado = idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");
    printf("%d", resultado);
}