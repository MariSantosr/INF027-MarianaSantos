#include <stdio.h>

void main()
{
    int numero;
    int moduloNegativo;
    
    printf("Digite um número: \n");
    scanf("%d", &numero);
    
    if(numero >= 0) {
        printf("O módulo de %d é: %d ", numero, numero);
    } else if (numero < 0) {
        moduloNegativo = numero * -1;
        printf("O módulo de %d é: %d ", numero, moduloNegativo);
    };
    
    
}
