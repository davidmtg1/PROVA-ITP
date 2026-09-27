//3. Calcule e mostre todos os números menores que 100 que são divisíveis por 4.

#include <stdio.h>

int main() {
    for (int i = 4; i < 100; i +=4) {
        printf("%d\n", i);
    }

    return 0;
}