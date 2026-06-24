#include <stdio.h>

void comissao(float *preco1, float *preco2) {
    *preco1 = *preco1 * 1.10;
    *preco2 = *preco2 * 1.10;
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

    return 0;
}
