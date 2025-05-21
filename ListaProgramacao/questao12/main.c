#include <stdio.h>

void main()
{
    float velocidadeMS;
    float velocidadeKH;
    
    printf("Informe a velocidade em m/s: \n");
    scanf("%f", &velocidadeMS);
    
    velocidadeKH = velocidadeMS * 3.6;
    
    printf("A velocidade em Km/h é: %.2f", velocidadeKH);

}