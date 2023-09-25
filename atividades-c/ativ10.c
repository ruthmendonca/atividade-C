ex 10)
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("O valor de A é: %d\n", a);
    printf("Já o valor de B é: %d\n", b);

    return 0;
}
