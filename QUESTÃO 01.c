#include <stdio.h>

int main() {
    float lado, area;

    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado; // Calcula a área

    printf("A área do quadrado é: %.2f\n", area);
    printf("O dobro da área é: %.2f\n", 2 * area); 

    return 0;
}
