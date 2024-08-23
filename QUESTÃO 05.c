#include <stdio.h>

int main() {
    double custoFabrica, custoConsumidor;
    const double percentualDistribuidor = 0.28;
    const double impostos = 0.45;

    // Leitura do custo de fábrica
    printf("Digite o custo de fábrica do carro: ");
    scanf("%lf", &custoFabrica);

    // Cálculo do custo ao consumidor
    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * impostos);

    // Exibição do resultado
    printf("O valor final pago pelo consumidor é: R$ %.2lf\n", custoConsumidor);

    return 0;
}
