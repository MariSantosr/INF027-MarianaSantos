#include <stdio.h>

void main()
{
    float tempCelsius;
    float tempFahrenheit;
    
        printf("Informe a temperatura em Fahrenheit: \n");
        scanf("%f", &tempFahrenheit);
    
            tempCelsius = (tempFahrenheit - 32) * 5/9;
    
        printf("A temperatura em Fahrenheit é: %.2f e em Celsius é: %.2f ", tempFahrenheit, tempCelsius);
    

}