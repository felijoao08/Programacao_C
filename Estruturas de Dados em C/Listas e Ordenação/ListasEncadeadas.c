#include <stdio.h>

int main() {
    \\Lista encadeada 
    \\Dado: informação que queremos guardar
    \\Ponteiro: Endereço que aponta para proximo nó da __va_list_tag

    \\Estrutura simples
    struct No { 
        int dado;
        struct No* proximo \\Seta que aponta para proximo nó
    }

    \\Estrutura duplamente encadeada: Permite ir atras de intens para frente para tras
      struct No { 
        int dado;
        struct No* proximo \\Seta que aponta para proximo nó
        struct No* anterior \\Seta que aponta para nó anterior
    }

    \\Estrutura Circular Simples: o último nó aponta para o primeiro nó
    \\Estrutura circular duplamente encadeada: o último nó aponta para o primeiro nó e podemos seguir para frente e para trás
    

}