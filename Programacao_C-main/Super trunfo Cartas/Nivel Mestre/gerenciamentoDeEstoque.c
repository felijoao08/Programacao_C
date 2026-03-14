#include <stdio.h> 

int main() {
    //nome
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    //Quantidade em estoque
    unsigned int estoqueA = 1000; //Estoque nao é negativo por isso o unsigned
    unsigned int estoqueB = 2000;

    //Valor dos produtos
    float  valorA = 10.50;
    float  valorB = 15.75;

    //Estoque minimo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    //Valor total
    double valorTotalA = valorA * estoqueA;
    double valorTotalB = valorB * estoqueB;


    //Comparaçao de valor minimo de estoque
    unsigned int ResultadoA = estoqueA > estoqueMinimoA;
    unsigned int ResultadoB = estoqueB > estoqueMinimoB;
    printf("O Produto %s tem estoque minimo de %d unidades\n\n", produtoA, ResultadoA);
    printf("O Produto %s tem estoque minimo de %d unidades\n\n", produtoB, ResultadoB);

    

    //Exibir informaçoes dos produtos
    printf("O %s tem estoque %u e valor unitario de %.2f\n\n", produtoA, estoqueA, valorA);
    printf("O %s tem estoque %u e valor unitario de %.2f\n", produtoB, estoqueB, valorB);

}