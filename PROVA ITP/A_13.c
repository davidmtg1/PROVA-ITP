// 13. Leia um valor n e gere os n primeiros termos da sequência de Fibonacci, iniciada por 0 e 1. Ao final, calcule e mostre também a soma dos termos gerados.

#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, proximo;
    long long soma = 0;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que zero.\n");
        return 1;
    }

    printf("Sequencia: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            soma += t1;
            continue;
        }
        
        if (i == 2) {
            printf("%lld ", t2);
            soma += t2;
            continue;
        }

        proximo = t1 + t2;
        t1 = t2;          
        t2 = proximo;     

        printf("%lld ", proximo);
        soma += proximo;
    }

    printf("\nA soma dos termos gerados e: %lld\n", soma);

    return 0;
}