//5. Leia um número inteiro não negativo e calcule o seu fatorial.

#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1; 

    printf("Digite um numero inteiro nao negativo: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Por favor, digite um numero valido (nao negativo).\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fatorial = fatorial * i; 
    }

    printf("O fatorial de %d e: %llu\n", n, fatorial);

    return 0;
}