#include <stdio.h>

int main() {
    float val_dolar, cot, val_real;

    printf("Digite o valor de dolares guardados em seu cofre: ");
    scanf("%f", &val_dolar);
    
    printf("Digite a cotação do dolar no dia de hoje: ");
    scanf("%f", &cot);

    val_real = val_dolar * cot;

    printf("O valor no cofre, em reais é de: %.2f \n", val_real);

    return 0;
}
