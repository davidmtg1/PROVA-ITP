//15. Crie uma função que receba uma temperatura em graus Celsius e retorne o valor correspondente em Fahrenheit.

#include <stdio.h>

float celsiusParaFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit; 
}

int main() {
    float tempCelsius, tempFahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = celsiusParaFahrenheit(tempCelsius);

    printf("%.2f°C equivalem a %.2f°F\n", tempCelsius, tempFahrenheit);

    return 0;
}

