#include <stdio.h>

int main() {
    int x = 10;
    int* p = &x;

    //Mudando o valor de x utilizando o ponteiro
    *p = 20;

    printf("O valor de x é: %d\n", x);
    printf("O endereço de x é: %p\n", &x);
    printf("O valor do ponteiro p é: %p\n", p);


}