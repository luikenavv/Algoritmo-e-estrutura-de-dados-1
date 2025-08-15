#include <stdio.h>

int main() {
    int maquinas1 = 8, pecas1 = 120;
    int maquinas2 = 10;
	int pecas2;

    pecas2 = (pecas1 / maquinas1) * maquinas2;

    printf("Em 5 horas, %d maquinas produzem %d pecas.", maquinas2, pecas2);

    return 0;
}
