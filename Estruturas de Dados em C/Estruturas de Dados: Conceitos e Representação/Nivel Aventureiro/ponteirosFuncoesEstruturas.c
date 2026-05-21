#include <stdio.h>

//Um ponteiro pode também pode apontar para uma funçao ou uma
//estrutura inteira
void saudacao() {
    printf("Olá, mundo\n");
}

int main() {
    //Declarando um ponteiro "ptr" para una funçao
    //que não retorna nada(void) e não tem parâmetros ().

    void (*ptr()) = saudacao;

    //chamando a função através do ponteiro
    ptr();

    return 0;
}