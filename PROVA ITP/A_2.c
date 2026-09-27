//2. Mostre todos os múltiplos de 7 menores que 200.

#include <stdio.h>

int main() {
    for (int i = 7; i <= 200; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}