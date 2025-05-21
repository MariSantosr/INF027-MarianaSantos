#include <stdio.h>

void main()
{
    float numero;
    
    printf("Digite um número: \n");
    scanf("%f", &numero);
    
    if (numero >= 0){
        printf("%.2f é um número positivo", numero);
    } else {
        printf("%.2f é um número negativo", numero);
    };

}