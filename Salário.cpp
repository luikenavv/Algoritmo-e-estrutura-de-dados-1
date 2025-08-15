#include <stdio.h>

int main() {
    float salarioBase, valorhora_extra, totalreceber;
    int horas_extras;

    printf("Digite o salario base: R$ ");
    scanf("%f", &salarioBase);

    printf("Digite o valor da hora extra: R$ ");
    scanf("%f", &valorhora_extra);

    printf("Digite a quantidade de horas extras: ");
    scanf("%d", &horas_extras);

    totalreceber = salarioBase + (valorhora_extra * horas_extras);

    printf("O total a receber e: R$ %f", totalreceber);

    return 0;
}
