//18. Crie uma função que receba um vetor de inteiros e desenhe um gráfico com asteriscos. Para cada elemento do vetor, imprima uma linha contendo a quantidade de asteriscos correspondente ao valor daquele elemento.

#include <stdio.h>

void desenharGrafico(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < vetor[i]; j++) {
            printf("*");
        }
        printf("\n"); 
    }
}

int main() {
    int tamanho;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os %d valores:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\narray:\n");
    desenharGrafico(vetor, tamanho);

    return 0;
}