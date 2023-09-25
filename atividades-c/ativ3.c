#include <stdio.h>

int main() {
    float d, pr, valortotal;

    printf("Digite o valor do produto desejado:\n");
    scanf("%f", &pr);
    
    d = (pr * 0.05);
    valortotal = (pr - d);
    
    printf("\n O valor total do produto, com o desconto é: %.2f", valortotal);
    printf("\n O valor do desconto é: %.2f", d);

    return 0;
}
