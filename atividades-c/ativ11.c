#include <stdio.h>

int main() {
    double ct, lt, cp, lp, areaTijolo, areaParede;
    int qntd;

    printf("Digite o comprimento do tijolo: ");
    scanf("%lf", &ct);

    printf("Digite a largura do tijolo: ");
    scanf("%lf", &lt);
    
    printf("\nAgora digite o comprimento da parede: ");
    scanf("%lf", &cp);

    printf("Por último, digite largura da parede: ");
    scanf("%lf", &lp);
  
    areaTijolo = ct * lt;
    areaParede = cp * lp;

    qntd = (areaParede / areaTijolo);


    printf("\nA quantidade de tijolos necessários para a contrução da parede é de: %d tijolos\n", qntd);

    return 0;
} 
