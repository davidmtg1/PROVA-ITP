//9. Calcule e mostre a média aritmética dos números pares entre 13 e 73.

#include <stdio.h>

int main() {
    int soma = 0;
    int quantidade = 0;
    float media;

    for (int i = 13; i <= 73; i++) {
        
        if (i % 2 == 0) {
            soma = soma + i;      
            quantidade++;          
        }
    }

    media = (float)soma / quantidade;

    printf("A media aritmetica dos numeros pares entre 13 e 73 e: %.2f\n", media);

    return 0;
}