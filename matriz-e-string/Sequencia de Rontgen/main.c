#include <stdio.h>
#define MAX_STR 255

void main(){
    
    char original[MAX_STR];
    char rontgen[MAX_STR];
    char atual;
    int ndxOriginal = 0, ndxRontgen = 0;
    int qtde, iCont, qtdeSequencias;
    
    printf("Informe a string original e quantidade de sequências: \n");
    scanf("%s %d", original, &qtdeSequencias);
    
    for(iCont = 0; iCont < qtdeSequencias; iCont++){
        for(ndxOriginal = 0, ndxRontgen = 0; original[ndxOriginal]; ){
            atual = original[ndxOriginal]; 
            qtde = 0;
            while(atual == original[ndxOriginal]){ //Contando as Sequências de Caracteres Consecutivos:
                qtde++;
                ndxOriginal++;
            }
            rontgen[ndxRontgen++] = qtde + '0'; // Armazena o número de repetições (convertido para caractere).
            rontgen[ndxRontgen++] = atual;  // Armazena o caractere.
        }
        rontgen[ndxRontgen] = '\0';
        puts(rontgen);
        for(ndxRontgen = 0; rontgen[ndxRontgen]; ndxRontgen++)
            original[ndxRontgen] = rontgen[ndxRontgen]; // Copia os caracteres de rontgen para original.
        original[ndxRontgen] = '\0';

}

}