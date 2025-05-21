#include <stdio.h>

void main(){
    
    int distanciaInicial;
    int distancia;
    int resto;
    
    printf("Informe a distância(km) que a particula vai percorrer: \n");
    scanf("%d", &distanciaInicial);
    
    distancia = distanciaInicial - 3;
    
    resto = distancia%8;
    
    if(resto == 3){
        printf("A distancia total percorrida foi de %d e o sensor atingido foi o Sensor 1", distanciaInicial);
    } else if (resto==4){
        printf("A distancia total percorrida foi de %d e o sensor atingido foi o Sensor 2", distanciaInicial);    
    } else if(resto==5){
        printf("A distancia total percorrida foi de %d e o sensor atingido foi o Sensor 3", distanciaInicial);
    }//fim do if else
    
}//fim do main
