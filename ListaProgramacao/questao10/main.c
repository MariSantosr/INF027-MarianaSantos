#include <stdio.h>

void main() {
    
    int numero;
    int numDecimal;
    int b0,b1,b2,b3,b4,b5;
    
    printf("Digite um número decimal entre 0 a 32: \n");
    scanf("%d", &numero);
    
    numDecimal = numero;
    
    b5 = numero%2;
    numero = numero/2;
    b4 = numero%2;
    numero = numero/2;
    b3 = numero%2;
    numero = numero/2;
    b2 = numero%2;
    numero = numero/2;
    b1 = numero%2;
    numero = numero/2;
    b0 = numero%2;
    
    printf("O número em decimal é: %d e em binário: %d%d%d%d%d%d", numDecimal, b0,b1,b2,b3,b4,b5);
    
}
