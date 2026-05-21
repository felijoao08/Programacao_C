#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Constantes globais
#define MAX_LIVROS 50
#define TAM_STRING 100

///Definição da estrutura (Struct)
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

//Funçao para limpar o buffer de entrada 
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

//Funçao principal
int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    //Laço principal do menu 
    printf("===============================\n");
    printf("BIBLIOTECA - PARTE \n");
    printf("===============================\n");
    printf("1 - Cadastrar Livro\n");
    printf("2 - Listar Livros\n");
    printf("3 - Sair\n");
    printf("===============================\n");
    printf("Escolha uma opção: ");

    //Le a opção do usuario
    scanf("%d", &opcao);
    limparBuffer(); //Limpa o buffer de entrada caso tenha algum "lixo"
    
    //Processando opções 
    switch (opcao) {
        case 1: //Cadastro
            printf("Cadastro de Livro\n");
            if (totalLivros < MAX_LIVROS) {

                //Pegando o nome do livro
                printf("Digite o nome do livro: ");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                //Pegando o nome do autor 
                printf("Digite o nome do autor: ");
                fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                //Pegando o nome da editora
                printf("Digite o nome da editora: ");
                fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                //Adicionando Livros
                biblioteca[totalLivros].nome[strspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                biblioteca[totalLivros].autor[strspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                biblioteca[totalLivros].editora[strspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                //Pedindo a edição
                printf("Digite o N° da edição:");
                scanf("%d", &biblioteca[totalLivros].edicao);
                limparBuffer();

                totalLivros++;
                printf("Livro cadastrado com sucesso!\n");

            }
            //Se caso a biblioteca estiver cheia
            else {
                printf("Biblioteca cheia!\n");
            }
            break;
        case 2: //listar livros
            printf("Lista de livro\n");
            for (int i = 0; i < totalLivros; i++) {
                printf("Livro: %d\n", i + 1);
                printf("Nome: %s\n", biblioteca[i].nome);
                printf("Autor: %s\n", biblioteca[i].autor);
                printf("Editora: %s\n", biblioteca[i].editora);
                printf("Ediçao: %d\n", biblioteca[i].edicao);
            }
            break;
        case 0: //Sair do sistema
            printf ("Saindo do sistema...");
            break;
    
    default: // OPÇÃO IVALIDA
        printf("Opção invalida!\n");
        break;
      
    };



}
