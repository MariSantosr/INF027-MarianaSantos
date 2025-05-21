#include <stdio.h>

void main()
{
    
    int n1;
    int n2;
    int resto;
    int quociente;
    
    printf("Digite 2 números inteiros: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    resto = n1%n2;
    quociente = n1/n2;
    
    printf("O quociente da divisão é: %d e o resto da divisão é: %d", quociente, resto);
    
    
}
