#include <stdio.h>


//valores
void notas(float *nota1, float *nota2) {
    printf("Digite a nota 1:");
    scanf("%f", nota1);
    printf("Digite a nota 2:");
    scanf("%f", nota2);
}

//media
float Calcularmedia(float nota1, float nota2) {
    float media;
    media = (nota1 + nota2) /2;

    return media;
}

int main() {
 float nota1, nota2, media;
 notas(&nota1, &nota2);
 media = Calcularmedia(nota1, nota2);
 printf("A media é: %.2f\n", media);
 return 0;

}