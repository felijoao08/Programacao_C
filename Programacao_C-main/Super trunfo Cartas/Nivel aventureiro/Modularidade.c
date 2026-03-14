#include <stdio.h>

//Função para ler as notas
void notas(float *nota1, float *nota2) {
    printf("Digite a nota 1: ");
    scanf("%f", nota1);

    printf("Digite a nota 2: ");
    scanf("%f", nota2);
}

//Função que calcula a média
float CalcularMediaDasNotas(float nota1, float nota2) {
    float media;
    media = (nota1 + nota2) / 2;
    return media;
}

//Função que exibe a média
void exibirMedia(float media) {
    printf("A media das notas é: %.2f\n", media);
}

int main() {
    float nota1, nota2, media;
    notas(&nota1, &nota2);
    media = CalcularMediaDasNotas(nota1, nota2);
    exibirMedia(media);
    return 0;
}
