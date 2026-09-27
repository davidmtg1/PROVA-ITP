//19. Crie uma função chama "aleatório" que receba dois inteiros A e B e retorne um número inteiro pseudoaleatório pertencente ao intervalo fechado [A, B]. O usuário deve digitar os números do intervalo e o programa deve exibir o resultado na tela.

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int aleatorio(int a, int b) {
    int menor = (a < b) ? a : b;
    int maior = (a > b) ? a : b;

    int resultado = rand() % (maior - menor + 1) + menor;

    return resultado;
}

int main() {
    int a, b;

    srand(time(NULL));

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    int numeroSorteado = aleatorio(a, b);

    printf("\nNumero aleatorio do intervalo [%d, %d]: %d\n", a, b, numeroSorteado);

    return 0;
}