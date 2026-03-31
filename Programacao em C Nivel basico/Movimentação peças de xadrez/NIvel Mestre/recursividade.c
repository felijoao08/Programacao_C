#include <stdio.h>


void funcao1 () {
    printf("Hello world!");

    return funcao1();
}

int main() {
    //Recursividade
    //É a forma que uma função chama a si mesma para fazer determinada ação

    funcao1();

    return 0;
}