#include <stdio.h>



int main() {
    int valor = 0;
    printf("Digite um valor de 1 a 99:");
    scanf("%d", &valor);

    while(valor <= 100 ) {
        printf("O valor atual é: %d\n", valor);
        valor++;
    };

    printf("O valor esta acima de 100\n");
    
};