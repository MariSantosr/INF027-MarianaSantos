#include <stdio.h>

void main()
{
    char tipoCombustivel;
    float qtdCombustivel;
    float valorFinal;
    float desconto;
    float precoGasolina;
    float precoAlcool;
    
    printf("Informe se vai abastecer com álcool(A) ou gasolina(G): \n ");
    scanf("%c", & tipoCombustivel);
    printf("Informe a quantidade de litros que vai abastecer: \n");
    scanf("%f", &qtdCombustivel);
    
    
    if(tipoCombustivel == 'A' && qtdCombustivel <= 25){
            precoAlcool = qtdCombustivel * 1.90;
            desconto = precoAlcool * 2/100;
            valorFinal = precoAlcool - desconto;
            printf("O valor final a ser pago é: %.2f", valorFinal);
        } else if (tipoCombustivel == 'A' && qtdCombustivel > 25){
            precoAlcool = qtdCombustivel * 1.90;
            desconto = qtdCombustivel * 4/100;
            valorFinal = precoAlcool - desconto;
            printf("O valor final a ser pago é: %.2f", valorFinal);
        } else if(tipoCombustivel == 'G' && qtdCombustivel <= 25){
            precoGasolina = qtdCombustivel * 2.70;
            desconto = precoGasolina * 3/100;
            valorFinal = precoGasolina - desconto;
            printf("O valor final a ser pago é: %.2f", valorFinal);
        } else if(tipoCombustivel == 'G' && qtdCombustivel > 25){
            precoGasolina = qtdCombustivel * 2.70;
            desconto = precoGasolina * 5/100;
            valorFinal = precoGasolina - desconto;
            printf("O valor final a ser pago é: %.2f", valorFinal);
        };
        
        
}//fim do main
