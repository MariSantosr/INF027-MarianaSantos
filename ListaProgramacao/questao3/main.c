#include <stdio.h>

void main()
{
    
    float raioCirculo;
    float areaCirculo;
    float perimetroCirculo;
    
    printf("Informe o raio do círculo: \n");
    scanf("%f", &raioCirculo);
    
    areaCirculo = 3.14 * (raioCirculo * raioCirculo);
    perimetroCirculo = 2 * raioCirculo * 3.14;
    
    printf("A área do círculo é: %.2f e o perímetro do círculo é %.2f", areaCirculo,perimetroCirculo);

}