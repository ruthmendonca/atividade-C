#include <stdio.h>
#include <stdlib.h>

int main() {
	float pr, d, pag;
	
	printf("\nDigite o preco do produto: ");
	scanf("%f", &pr);
	printf("\n Digite a porcentagem em forma decimal ex: 10% -> 0.10 \n Desconto: ");
	scanf("%f", &d);
	
	pag = pr * (1 - d);
		
	printf("\nO preco a ser pago pelo produto com o desconto é: %.2f", pag);
	
	return 0;
}
