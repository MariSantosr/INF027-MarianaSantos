#include <stdio.h>
#define PRIMEIRO_PRIMO 2

void main(){
    
    int numero, limite;
    int maiorDistancia, distancia;
    int primoAnterior, primoAtual;
    int divisor, divisores;
    
    printf("Infome o número máximo: \n");
    scanf("%d", &limite);
    
    maiorDistancia = 0;
    
    //define que os dois primeiros números primos são 2 (primeiro primo)
    primoAnterior = primoAtual = PRIMEIRO_PRIMO;
    
    //percorre todos os números de 'PRIMEIRO_PRIMO' até o 'limite' fornecido pelo usuário
    for(numero = PRIMEIRO_PRIMO; numero <= limite; numero++){
        divisores = 0;
        for(divisor = 1; divisor <= numero; divisor++){ //for para contar o número de divisores de 'numero'
            if((numero % divisor) == 0)
                divisores++;
        }
        //verifica se o número é primo
        if(divisores <= 2){
            primoAnterior = primoAtual;
            primoAtual = numero;
            distancia = primoAtual - primoAnterior;
            if(distancia > maiorDistancia)
                maiorDistancia = distancia;
        }
    }

    printf("A maior distância entres os primos é: %d", maiorDistancia);

}