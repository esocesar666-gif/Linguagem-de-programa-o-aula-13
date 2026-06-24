#include <stdio.h>

void comissao(float *preco1ptr, float *preco2ptr) {
    *preco1ptr = *preco1ptr * 1.10;
    *preco2ptr = *preco2ptr * 1.10;
}

int main() {
    char produto[30];
    float preco1, preco2;

    printf("Produto: ");
    scanf("%29s", produto);
    printf("Preco do produto no Barretense: ");
    scanf("%f", &preco1);
    printf("Preco do produto no Savegnago: ");
    scanf("%f", &preco2);

    comissao(&preco1, &preco2);

    printf("Produto: %s\n", produto);
    printf("Preco do Barretense com a comissao: R$ %.2f\n", preco1);
    printf("Preco do Savegnago com a comissao: R$ %.2f", preco2);

    return 0;
}
