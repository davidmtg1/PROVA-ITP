//6. Leia um valor L e determine o menor inteiro positivo x cujo quadrado seja maior que L.

#include <stdio.h>

int main() {
    int L;
    int x = 1;

    printf("Digite o valor de L: ");
    scanf("%d", &L);

    while (x * x <= L) {
        x++;
    }

    printf("O menor x e: %d\n", x);
    return 0;
}