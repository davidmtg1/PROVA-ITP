//12. Determine o 6° e o 12° números primos e mostre a diferença entre eles.

#include <stdio.h>

int main() {
    int sexto = 13;
    int duodecimo = 37;
    int diferenca = duodecimo - sexto;

    printf("O 6º primo e: %d\n", sexto);
    printf("O 12º primo e: %d\n", duodecimo);
    printf("A diferenca e: %d\n", diferenca);

    return 0;
}