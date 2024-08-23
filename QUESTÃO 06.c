#include <stdio.h>

int main() {
    float tempo, velocidade_media, distancia, litros_usados;

    printf("Tempo gasto (horas): ");
    scanf("%f", &tempo);

    printf("Velocidade média (km/h): ");
    scanf("%f", &velocidade_media);

    distancia = tempo * velocidade_media;
    litros_usados = distancia / 12;

    printf("Velocidade média: %.2f km/h\n", velocidade_media);
    printf("Tempo gasto: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Combustível utilizado: %.2f litros\n", litros_usados);

    return 0;
}
