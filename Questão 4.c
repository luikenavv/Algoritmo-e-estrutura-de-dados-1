#include <stdio.h>

int main() {
    float preco, desconto, precofinal;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);

    precofinal = preco - (preco * desconto / 100);

    printf("O valor do produto e: R$ %f", precofinal);

    return 0;
}
