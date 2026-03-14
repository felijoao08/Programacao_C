/*
> maior que
< menor que
= recebe
!= diferente
== igual
=> igual ou maior que
=< igual ou menor que
*/

#include <stdio.h>
//Comparaçao simples
int main() {
    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    return 0;
}
//Comparaçao de tipos diferentes
//Sempre converter de forma explicita os valores antes da comparação, para garantir que a comparaçaoa seja de forma correta

int main() {
    int x = 5;
    float y = 5.0;

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    return 0;
}