#include <stdio.h>

void main(){
    
    int numero;
    int media;
    int soma;
    int i;
    
    soma= 0;
    
    
    for(i = 1; i <= 5; i++){
        
        printf("Informe um número:\n");
        scanf("%d", &numero);
        
        soma = soma + numero;
        media = soma/5;
        
    }
    
    printf("A media é: %d \n", media);
    
}
