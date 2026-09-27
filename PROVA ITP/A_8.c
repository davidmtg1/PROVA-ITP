//8. Leia um número inteiro n e mostre a tabuada de n, do multiplicador 1 ao 10.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro para ver a tabuada: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}