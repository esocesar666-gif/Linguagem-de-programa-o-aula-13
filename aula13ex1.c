#include <stdio.h>

int main() {
    char produto[30];
    float preco1, preco2;

    printf("Produto: ");
    scanf("%29s", produto);
    printf("Preco do produto no Barretense: ");
    scanf("%f", &preco1);
    printf("Preco do produto no Savegnago: ");
    scanf("%f", &preco2);

    return 0;
}