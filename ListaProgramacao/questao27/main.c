#include <stdio.h>

void main() {
    
    float n1, n2, n3;
    float mediaPonderada;
    float maior;
    
    printf("Informe os 3 números: \n ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    if( n1 > n2 && n1 > n3) {
        maior = n1;
        mediaPonderada = (maior*5 + n2*2.5 + n3*2.5) / 10;
        printf("A Média Ponderada dos 3 números é: %.2f", mediaPonderada);
        
    } else if (n2 > n1 && n2 > n3){
       maior = n2;
       mediaPonderada = (maior*5 + n1*2.5 + n3*2.5) / 10;
       printf("A Média Ponderada dos 3 números é: %.2f", mediaPonderada);
        
    }else if (n3 > n1 && n3 > n2) {
       maior = n3;
       mediaPonderada = (maior*5 + n1*2.5 + n2*2.5) / 10;
       printf("A Média Ponderada dos 3 números é: %.2f", mediaPonderada);
       
    };
    
}//fim do main
