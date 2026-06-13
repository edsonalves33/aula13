#include <stdio.h>

void comissao(float *preco1, float *preco2);

int main()
{
    float preco1, preco2;

    printf("Digite o preco 1: ");
    scanf("%f", &preco1);

    printf("Digite o preco 2: ");
    scanf("%f", &preco2);

    comissao(&preco1, &preco2);

    return 0;
}

void comissao(float *preco1, float *preco2)
{
    *preco1 = *preco1 * 1.10;
    *preco2 = *preco2 * 1.10;
}
