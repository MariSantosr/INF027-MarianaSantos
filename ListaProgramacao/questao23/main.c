#include <stdio.h>

void main()
{
    int numero;
    
    printf("Digite um número: \n");
    scanf("%d", &numero);
    
    if((numero%2) == 0){
        printf("%d é par", numero);
    } else {
        printf("%d não é par", numero);
    };

    
}
