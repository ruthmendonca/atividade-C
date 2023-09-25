#include <stdio.h>



int main() {
    int l, c, area;

    printf("Digite o tamanho da base de sua sala de aula em metros:\n");
    scanf("%d", &l);

    printf("Agora digite a altura da sua sala de aula em metros:\n");
    scanf("%d", &c);

    area = l * c;
    printf("A area da sua sala de aula é: %d m²", area);

    return 0;
}
