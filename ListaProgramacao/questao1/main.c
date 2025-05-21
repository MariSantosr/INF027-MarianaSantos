#include <stdio.h>

void main()
{
    float retanguloBase;
    float retanguloAltura;
    float retanguloArea;
    float retanguloPerimetro;
    
    printf("Informe o valor da base do retângulo: ");
    scanf("%f", &retanguloBase);
    printf("Informe o valor da altura do retângulo: ");
    scanf("%f", &retanguloAltura);
    
        retanguloArea = retanguloBase * retanguloAltura;
        retanguloPerimetro = 2 * (retanguloBase + retanguloAltura);
        
    printf("A área do retângulo é: %.2f, e o seu perímetro é igual a: %.2f", retanguloArea, retanguloPerimetro);
 
 
}
