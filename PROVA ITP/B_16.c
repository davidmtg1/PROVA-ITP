//16. Crie uma função que receba uma temperatura em graus Fahrenheit e retorne o valor correspondente em Celsius.

#include <stdio.h>

float fahrenheitParaCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsius; 
}

int main() {
    float tempFahrenheit, tempCelsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempFahrenheit);

    tempCelsius = fahrenheitParaCelsius(tempFahrenheit);

    printf("%.2f°F equivalem a %.2f°C\n", tempFahrenheit, tempCelsius);

    return 0;
}