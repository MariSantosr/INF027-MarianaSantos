#include <stdio.h>

void main()
{
    float volumeLata;
    float raioLata;
    float alturaLata;
    
    printf("Informe a altura e o raio da lata de óleo: \n");
    scanf("%f", &alturaLata);
    scanf("%f", &raioLata);
    
    volumeLata = 3.14 * (raioLata*raioLata) * alturaLata;
    
    printf("O volume da lata de óleo é: %.2f ", volumeLata);

}
