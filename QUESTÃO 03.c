#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    double produtoDobro, somaTriploMetade, raizSoma;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);

    // Cálculos
    produtoDobro = 2 * num1;
    somaTriploMetade = 3 * num1 + 0.5 * num2;
    raizSoma = sqrt(num1 + num2);

    // Exibe os resultados
    printf("Produto do dobro do primeiro número: %.2lf\n", produtoDobro);
    printf("Soma do triplo do primeiro número com metade do segundo número: %.2lf\n", somaTriploMetade);
    printf("Raiz quadrada da soma dos números: %.2lf\n", raizSoma);

    return 0;
}
