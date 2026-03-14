#include <stdio.h>

int main () {
    //Contagem Regressiva
   
    for (int segundos = 10; segundos > 0; segundos-- ) {
        //Aqui sera o "Atraso dos milezimos"
        for (int milesimos = 0; milesimos < 1000000000; milesimos++) {
            //Aqui nao ocorrer nada(apenas para efeito visual)
        }
        printf("%d\n", segundos);

    }


    
}