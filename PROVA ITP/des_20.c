//20. Refaça a questão 18, mas agora desenhe o gráfico na orientação horizontal, formando colunas de asteriscos para os valores do vetor.

#include <stdio.h>

void desenharGraficoVertical(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    for (int h = maior; h >= 1; h--) {
        for (int i = 0; i < tamanho; i++) {
            if (vetor[i] >= h) {
                printf("* ");
            } else {
                printf("  ");
            }
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

    printf("\nGrafico Vertical:\n");
    desenharGraficoVertical(vetor, tamanho);

    return 0;
}
