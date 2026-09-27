//10. Leia 10 valores, um de cada vez. Ao final, informe quantos estão no intervalo fechado [10, 50] e quantos estão fora dele.

#include <stdio.h>

int main() {
    int valor;
    int dentro = 0;
    int fora = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 50) {
            dentro++; 
        } else {
            fora++;   
        }
    }

    printf("\nRESULTADO FINAL\n");
    printf("Valores dentro do intervalo [10, 50]: %d\n", dentro);
    printf("Valores fora do intervalo: %d\n", fora);

    return 0;
}