#include <stdio.h>

void main() {
    char email = "joao@email.com";
    char senha = "joao0100";

    if (email == "joao@email.com") {
        if(senha == "joao010") {
            printf("Logado\n");
        }
        else {
            printf("Os dados não conferem!");
        }
    }
    else {
        printf("Os dados não conferem!");
    }
    
}