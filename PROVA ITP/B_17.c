//17. Crie uma função que receba um número inteiro positivo, realize sua decomposição em fatores primos e imprima os fatores encontrados. Ex: 1365 = 3 x 5 x 7 x 13

#include <stdio.h>

void decomporEmPrimos(int n) {
    int primeiroFator = 1; 

    printf("Decomposicao de %d: ", n);

    for (int i = 2; i <= n; i++) {

        while (n % i == 0) {

            if (!primeiroFator) {
                printf(" x ");
            }
            
            printf("%d", i);
            n = n / i;           
            primeiroFator = 0;  
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite apenas numeros inteiros positivos.\n");
        return 1;
    }

    decomporEmPrimos(numero);

    return 0;
}