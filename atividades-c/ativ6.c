#include <stdio.h>

int main() {
    int aa, an, idade;

     
    printf("Digite o ano atual: ");
    scanf("%d", &aa);

    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &an);

    idade = aa - an;
    
    printf("Sua idade é: %d anos\n", idade);


    return 0;
}
