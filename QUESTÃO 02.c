#include <stdio.h>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    // Solicita a temperatura em Celsius
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

    // Calcula a temperatura em Fahrenheit
    temperaturaFahrenheit = (temperaturaCelsius * 9) / 5 + 32;

    // Exibe o resultado
    printf("%.1f graus Celsius é igual a %.1f graus Fahrenheit.\n", temperaturaCelsius, temperaturaFahrenheit);

    return 0;
}
