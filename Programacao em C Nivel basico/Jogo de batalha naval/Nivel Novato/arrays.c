#include <stdio.h>


int main() {
    //introdução a Arrays
    //Arrays são vetores

    float notas[3] = {10.0, 9.5, 7.5};

    for (int i = 0; i <= 2; i++) {
        printf("A %dª nota é: %f \n", i+1, notas[i]);

    }

    //Array de String
    char *nomes[] = {"Maria", "João", "Pedro"};
    for (int i = 0; i <= 2; i++) {
        printf("Os selecionados são: %s\n",  nomes[i]);
    }

}