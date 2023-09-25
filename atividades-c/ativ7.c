#include <stdio.h>

int main() {
    float raio, volume;
    float pi = 3.1415;

    printf("Digite o raio de uma esfera: ");
    scanf("%f", &raio);

    volume = 4 * pi * (raio * raio * raio) / 3;

    printf("O volume da esfera  é %.2f metros³ \n", volume);

    return 0;
}
