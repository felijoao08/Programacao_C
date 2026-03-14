
#include <stdio.h>


//Função para calcular a densidade populacional de cada cidade
float densidadePopulacional(int populacao, float area) {
    float densidade;
    densidade = (float) populacao / area;

    return densidade;
}
//Função para calcular o PIB per capita
float pibPerCapita(float pib, int populacao) {
    float pibPerCapita;
    pibPerCapita = (float) pib / populacao;

    return pibPerCapita;
}


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

    //Calculando Densidade populacional da carta 1
    float densidadeCarta1 = densidadePopulacional(populacao, area);
    //Calculando PIB per capita da carta 1
    float pibPerCapitaCarta1 = pibPerCapita(pib, populacao);



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

    //Calculando Densidade populacional da carta 2
    float densidadeCarta2 = densidadePopulacional(populacao2, area2);
    //Calculando PIB per capita da carta 2
    float pibPerCapitaCarta2 = pibPerCapita(pib2, populacao2);

    
    //Informações das duas cartas mostradas no terminal
    printf("MUITO BEM, AS INFORMAÇOES DAS CARTAS SÃO AS SEGUINTES:\n\n");
    //Carta Numero 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %i\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", numeroPT);
    printf("Densidade populacional: %.2f hab/km2\n", densidadeCarta1);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta1);




    //Carta Numero 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", numeroPT2);
    printf("Densidade populacional: %.2f hab/km2\n", densidadeCarta2);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCarta2);



}