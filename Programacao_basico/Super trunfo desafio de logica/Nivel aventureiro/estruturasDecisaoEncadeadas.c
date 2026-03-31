#include <stdio.h>

void main() {
    int idade = 18;
    if (idade >= 18)
    {
        printf("Maior de idade");
    }
    else if (idade < 18){
        printf("Menor de idade");
    }
    else if (idade > 60) {
        printf("Idoso");
    }
    else {
        printf("Invalido");
    }

    
}