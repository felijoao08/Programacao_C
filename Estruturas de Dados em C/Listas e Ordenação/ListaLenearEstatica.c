#include <stdio.h>

int main() {
    
    \\Lista estatica
    int numeros[5] = {10, 20, 30, 40, 50}; \\Vetor

    for (int i = 0; i < 5; i++) {
        printf("Número: %d\n", numeros[i]);
    }
}   