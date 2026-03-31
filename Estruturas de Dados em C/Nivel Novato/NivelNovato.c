#include <stdio.h>

//Definindo Struct Territorio
struct Territorio {
    char nome[50];
    char cor[50];
    int tropas;
};

//Função principal
int main() {
    //Criando variavel 
    struct Territorio territorio[5];
    
    //Cadastrando Tropas
    printf("=========================================================\n");
    printf("Vamos cadastrar nossas tropas\n");
    printf("=========================================================\n");

    //Laço para deixar mais dinámico
    for (int i = 0; i < 5; i++) {
        printf("\n\n----- Cadastrando territorio: -----\n\n");

        printf(" - Digite o nome do territorio:");
        scanf("%s", territorio[i].nome);

        printf(" - Digite a cor do territorio:");
        scanf("%s", territorio[i].cor);

        printf(" - Digite o número de tropas:");
        scanf("%d", &territorio[i].tropas);
    }
    //Mostrando territorios
    for (int i = 0; i < 5; i++) {
        printf("\n\n===== TERRITORIO %d =====\n\n", i + 1);
        printf("Nome: %s \n", territorio[i].nome);
        printf("Cor: %s \n", territorio[i].cor);
        printf("Tropas: %d \n ", territorio[i].tropas);

    }
    return 0;
}