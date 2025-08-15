#include <stdio.h>

int main() {
    float PI = 3.14;
    float raio, area, perimetro;
    
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    perimetro = 2 * PI * raio;

    printf("Area do circulo: %f\n", area);
    printf("Perimetro do circulo: %f", perimetro);

    return 0;
}

