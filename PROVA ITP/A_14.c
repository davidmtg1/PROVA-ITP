//14. Encontre e mostre 20 números no intervalo de 1000 a 1999 que, ao serem divididos por 11, deixem resto igual a 5.

#include <stdio.h>

int main() {
    int encontrados = 0; 

    printf("Numeros entre 1000 e 1999 que divididos por 11 deixam resto 5:\n");

    for (int i = 1000; i <= 1999; i++) {
        
        if (i % 11 == 5) {
            printf("%d ", i);
            encontrados++; 
        }

        if (encontrados == 20) {
            break;
        }
    }

    printf("\n\nTotal encontrados: %d\n", encontrados);

    return 0;
}