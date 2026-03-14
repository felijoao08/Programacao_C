//ENTRADA <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

/*
Entrada de dados com scanf
A forma geral do comando scanf é a seguinte:

scanf(''formato'', &variavel);
Aqui, "formato" especifica o tipo de dado que você espera que o usuário insira,
e &variavel é o endereço da variável onde o dado será armazenado.
*/

#include <stdio.h>

int main() {
    char nome[20];
    int idade;
    int altura;

    printf("Digite sua idade seu nome:\n");
    scanf("%c", &nome);

    printf("Digite sua idade sua idade:\n");
    scanf("%i", &idade);

    printf("Digite sua idade sua altura:\n");
    scanf("%f", &altura);

    printf("Seu nome é %s\n", nome);
    printf("Sua idade é %i\n", idade);
    printf("Sua altura é %f\n", altura);
    
    

    return 0;
}

//OBS 1: A linguagem C ler um espaço em branco, como uma finalizaçao de codigo por quando vc manda joao felipe ela so tem como saida o joao.

/*
Lendo Strings com Espaços: fgets

Para ler strings com espaços em branco, a função fgets é a melhor opção

fgets recebe três argumentos:
1- O array onde a string será armazenada.
2- O tamanho máximo da string (incluindo o \n e o \0).
3- O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
*/