#include <stdio.h>

Int valor = 1; \\Variavel de escopo global


//Modularizaçao é basicamente a utilização de funções
int soma (int n1, int n2) { \\Passagemn de parâmetros
    int soma = n1 + n1; //Variavel de escopo local
    
    return soma;

}


int main(){
    int n1 = 20;
    int n2 = 30;

    int resultado = soma(n1, n2);

    printf("A soma é: %d",resultado );


}