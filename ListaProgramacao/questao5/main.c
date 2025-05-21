#include <stdio.h>

void main()
{
    int n;
    int sucessor;
    
    printf("Digite um número inteiro: \n");
    scanf("%d", &n);
    
    sucessor = n + 1; 

    printf("O sucessor de %d é o número: %d", n, sucessor);
    
}

