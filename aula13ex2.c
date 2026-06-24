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
    
    printf("Produto: %s\n", produto);
    printf("Preco no Barretense: R$ %.2f\n", preco1);
    printf("Preco no Savegnago: R$ %.2f", preco2);

    return 0;
}