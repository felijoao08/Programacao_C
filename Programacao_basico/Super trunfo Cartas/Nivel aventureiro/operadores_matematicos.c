#include <stdio.h>

int main () {
    int a;
    int b;

    printf("DIGITE UM VALOR:");
    scanf("%d", &a);

    printf("DIGITE OUTRO VALOR:");
    scanf("%d", &b);



    //Multiplicaçao
    int m = a * b;
    printf("O rsultado da multiplicaçao é: %d\n", m);

    //Divisao
    int d = a / b;
    printf("O rsultado da divisao é: %d\n", d);

    //Soma
    int s = a + b;
    printf("O rsultado da soma é: %d\n", s);

    //Subtraçao
    int sub = a - b;
    printf("O resultadop da subtraçao é: %d\n", sub);

    //facilitadores
    /*
    --
    ++
    +=
    -=
    /=
    *=
    valor = --valor
    valor = valor--
    valor = valor++
    valor = ++valor
     */
}