
#include <stdio.h>


int main() {
    //INICIANDO O JOGO
    printf("SEJA BEM VINDO AO SUPER TRUNFO, VAMOS COMEÇAR!!\n");

    //Pegando Informações da primeira carta
    char estado;
    char codigo[3];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int numeroPT;

    printf("VAMOS PREENCHER AS INFORMACOES DA PRIMEIRA CARTA\n");
    printf("Digite o estado:");
    scanf(" %c", &estado);
    printf("Digite o Codigo da carta(OBS: o codigo deve ser a primeira letra no estado seguida de um numero de 01 a 04(EXEMPLO: A01, A02...)):");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade:");
    scanf("%s", &nomeCidade);
    printf("Digite o numero de habitantes:");
    scanf("%i", &populacao);
    printf("Digite a Aréa(em Km):");
    scanf("%f", &area);
    printf("Digite o PIB:");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos:");
    scanf("%i", &numeroPT);
    
    //Pegando Informações da segunda carta 
    char estado2;
    char codigo2[3];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int numeroPT2;

    printf("VAMOS PREENCHER AS INFORMACOES DA SEGUNDA CARTA\n");
    printf("Digite o estado:");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da carta(OBS: o codigo deve ser a primeira letra no estado seguida de um numero de 01 a 04(EXEMPLO: A01, A02...)):");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:");
    scanf("%s", &nomeCidade2);
    printf("Digite o numero de habitantes:");
    scanf("%i", &populacao2);
    printf("Digite a Aréa(em Km):");
    scanf("%f", &area2);
    printf("Digite o PIB:");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos:");
    scanf("%i", &numeroPT2);
    
    //Informações das duas cartas mostradas no terminal
    printf("MUITO BEM, AS INFORMAÇOES DAS CARTAS SÃO AS SEGUINTES:\n\n");

    //Carta Numero 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %i\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n\n", numeroPT);
    
    //Carta Numero 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", numeroPT2);


}