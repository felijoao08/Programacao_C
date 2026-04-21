#include <stdio.h>

int main() {

    int *a, b;
    b = 10; 
    a = (int*) malloc(sizeof(int)); //Pedimos um espaço
    *a = 20

    a = &b; //ERRO: Perdemos a referência de espaço alocado
    free(a); //ERRO: Tentando liberar memoria estática


    //FORMA CORRETA
    int *a, b;
    b = 10; 
    a = (int*) malloc(sizeof(int)); //Pedimos um espaço
    *a = 20
    free(a); //Liberei o espaço para poder receber o endereço de b

    a = &b; //agora sim a recebe o endereço de b
}