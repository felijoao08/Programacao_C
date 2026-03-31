#include <stdio.h>

/* LAÇO DE REPETIÇAO FOR

for (inicialização; condição; incremento) {
    // bloco de código a ser executado repetidamente
}

*/

int main() {
    int valor;
    printf("TABUADA\n");
    printf("Insira o valor:\n");
    scanf("%d", &valor);
    printf("TABUADA DE %d\n\n", valor);

    //Laço de repetiçao for
    for (int ind = 1 ; ind < 11; ind ++) {
        printf("%d X %d = %d\n", ind, valor,  (valor*ind));
    };



    return 0;
}