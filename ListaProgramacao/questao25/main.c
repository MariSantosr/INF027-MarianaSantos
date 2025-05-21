#include <stdio.h>

int main()
{
    int numeroMes;
    
    printf("Digite um número entre 1 e 12 equivalente ao mês do ano que deseja: \n");
    scanf("%d", &numeroMes);
    
    switch (numeroMes) {
        
        case 1: 
        printf("O mês de Janeiro possui: 31 dias");
        break;
        
        case 2: 
        printf("O mês de Fevereiro possui: 28 dias");
        break;
        
        case 3: 
        printf("O mês de Março possui: 31 dias");
        break;
        
        case 4: 
        printf("O mês de Abril possui: 30 dias");
        break;
        
        case 5: 
        printf("O mês de Maio possui: 31 dias");
        break;
        
        case 6: 
        printf("O mês de Junho possui: 30 dias");
        break;
        
        case 7: 
        printf("O mês de Julho possui: 31 dias");
        break;
        
        case 8: 
        printf("O mês de Agosto possui: 31 dias");
        break;
        
        case 9: 
        printf("O mês de Setembro possui: 30 dias");
        break;
        
        case 10: 
        printf("O mês de Outubro possui: 31 dias");
        break;
        
        case 11: 
        printf("O mês de Novembro possui: 30 dias");
        break;
        
        case 12: 
        printf("O mês de Dezembro possui: 31 dias");
        break;
    }
}
