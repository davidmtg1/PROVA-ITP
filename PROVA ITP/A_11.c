//11. Leia um número inteiro e informe se ele é primo ou não é primo.

#include <stdio.h>

int main() {
    int n;
    int divisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("O numero %d NAO e primo.\n", n);
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++; 
        }
    }

    if (divisores == 2) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
    }

    return 0;
}
