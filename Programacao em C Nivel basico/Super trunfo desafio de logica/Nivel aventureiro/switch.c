#include <stdint.h>


//O swicth é como se fosse um menu
int main() {
    int variavel;
    printf("Digite um valor\n");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        printf("vocẽ escolheu a opção 1");
    break;
    case 2:
        printf("vocẽ escolheu a opção 2");
    break;
    case 3:
        printf("vocẽ escolheu a opção 3");
    break;

    default:
        break;
    }
} 