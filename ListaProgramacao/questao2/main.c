#include <stdio.h>

void main()
{
    float ladoQuadrado;
    float areaQuadrado;
    float perimetroQuadrado;
    
    printf("Digite o valor do lado do quadrado:\n");
    scanf("%f", &ladoQuadrado);
    
    areaQuadrado = ladoQuadrado*ladoQuadrado;
    perimetroQuadrado = ladoQuadrado *4;
    
    printf("A área do quadrado é %.2f e o perímetro do quadrado é %.2f", areaQuadrado, perimetroQuadrado);
    

}
