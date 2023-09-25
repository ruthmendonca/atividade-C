#include <stdio.h>

int main() {
    float preco, precof, desc, pdesconto;

     
    printf("Digite o preço original do produto escolhido: ");
    scanf("%f", &preco);

    printf("Digite o preço com desconto do produto: ");
    scanf("%f", &precof);

    desc = preco - precof;
    pdesconto = (desc / preco) * 100;
    
    printf("A porcentagem de desconto foi de %.2f%%.\n", pdesconto);
    printf("O desconto dado foi de %.2f reais.\n", desc);

    return 0;
}
