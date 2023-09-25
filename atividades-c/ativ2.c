#include <stdio.h>




int main() {
    float l, c, area, perimetro;

    printf("Digite o tamanho da base de sua sala de aula em metros:\n");
    scanf("%f", &l);

    printf("Agora digite a altura da sua sala de aula em metros:\n");
    scanf("%f", &c);

    area = l * c;
    perimetro = (2 * (l+c));
    printf("A area da sua sala de aula é: %.0f m² \n", area);
    printf("O perimetro da sua sala de aula é: %.0f m²", perimetro);

    return 0;
}
