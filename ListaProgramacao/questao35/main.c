#include <stdio.h>

void main()
{
    int dia;
    
    printf("Informe de 1 a 7 o dia de semana solicitado: \n");
    scanf("%d", &dia);
    
    switch (dia) {
        
        case (1):
        printf("Hoje é Domingo");
        break;
        
        case (2):
        printf("Hoje é Segunda-feira");
        break;
        
        case (3):
        printf("Hoje é Terça-feira");
        break;
        
        case (4):
        printf("Hoje é Quarta-feira");
        break;
        
        case (5):
        printf("Hoje é Quinta-feira");
        break;
        
        case (6):
        printf("Hoje é Sexta-feira");
        break;
        
        case (7):
        printf("Hoje é Sábado");
        break;
        
        default: printf("INVÁLIDO");
        
    }//fim switch

}
