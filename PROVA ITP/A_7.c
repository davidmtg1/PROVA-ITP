//7. Mostre a tabuada do número 4, do multiplicador 1 ao 10.

#include <stdio.h>

int main() {
    int numero = 4;

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
