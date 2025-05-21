#include <stdio.h>

void main()
{
    float lado1, lado2, lado3;
    float perimetroTriangulo;
    
    printf("Digite o valor dos 3 lados do triângulo: \n");
    scanf("%f", &lado1);
    scanf("%f", &lado2);
    scanf("%f", &lado3);
    
    perimetroTriangulo = lado1 + lado2 + lado3;
    
    printf("O perímetro do triângulo é %.2f", perimetroTriangulo);
}
