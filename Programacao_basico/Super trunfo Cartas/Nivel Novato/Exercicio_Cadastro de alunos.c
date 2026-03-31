#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua idade: \n");
    scanf("%i", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matricula: \n");
    scanf("%i", &matricula);

    printf("Seja bem vindo a Estacio.\n");
    printf(" Seu nome é: %s\n Matricula: %i\n Idade: %i\n Altura: %f\n", nome, matricula, idade, altura);
 
    return 0;
}