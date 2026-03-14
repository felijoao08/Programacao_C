
//SAIDA >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/*
Saída de dados com printf

A função printf é usada para exibir informações na tela.

Sintaxe básica de printf:
printf(''texto com formatação'', variavel1, variavel2, ...);

Exemplo de uso com variáveis: ao utilizar o printf para imprimir variáveis, 
é necessário colocar o nome da variável e o especificador de formato.

printf(''texto com formatação'', variavel1, variavel2, ...);
*/

#include <stdio.h>

int main() {
    char nome[20] = "Joao";
    int  idade = 10;
    float altura = 1.78;

    //A formataçao com variaveis devem ter seus percentuais:
    printf("A idade é %d\n", idade);
    printf("A Altura é %f\n", altura);
    printf("Seu nome é %s\n", nome);

    return 0;
}

/*
ESPECIFICADORES
%d: Imprime um inteiro no formato decimal.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia 
*/

