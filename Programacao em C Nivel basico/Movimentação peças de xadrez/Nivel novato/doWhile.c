#include <stdio.h>


//Variaçao do while
//Garante pelo meno uma repetiçao e depois so ocorrerá de acordo com a condição
int main() {
    int valor = 0;
    int continuar;

    do
    {
        printf("Deseja contar mais 1? 1=Sim-0=Não\n");
        scanf("%d", &continuar);

        if (continuar == 0) {
            printf("Você parou em: %d\n", valor);
        }
        else if (continuar == 1) {
            valor++;
            printf("O valor estar em: %d\n", valor);
        }
    
        

    } while (continuar == 1);
    
    return 0;
}