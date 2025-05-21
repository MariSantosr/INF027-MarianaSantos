#include <stdio.h>

void main()
{
    int num;
    int c,d,u;
    int numInvertido;
    
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    c = num/100;
    d = (num%100) / 10;
    u = num%10;
    
    numInvertido = (u*100) + (d*10) + c;
    
    printf("O número original é: %d e o seu inverso é: %d", num, numInvertido);
    
    
}