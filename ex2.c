#include <stdio.h>

int main() {
    char produto[50];
    float preco1, preco2;

    printf("Digite o nome do produto: ");
    scanf("%49s", produto);

    printf("Digite o preco no supermercado 1: ");
    scanf("%f", &preco1);

    printf("Digite o preco no supermercado 2: ");
    scanf("%f", &preco2);

    printf("\nProduto: %s\n", produto);
    printf("Preco no supermercado 1: R$ %.2f\n", preco1);
    printf("Preco no supermercado 2: R$ %.2f\n", preco2);

    return 0;
}