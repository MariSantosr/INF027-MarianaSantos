#include <stdio.h>

void main()
{
    float n1,n2,n3,n4,n5;
    
    printf("Informe as notas dos 5 exames (I, II, III, IV e V): \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    
    if (n1 >= 70 && n2 >= 70 && n3 >= 70 && n4 >= 70 && n5 >= 70){
        printf("Classificação A – passou em todos os exames");
        
    }else if (n1 >= 70 && n2 >= 70 && n4 >= 70 && n3 < 70 && n5 < 70){
        printf("Classificação B – passou em I, II e IV, mas não em III ou V");
        
    } else if (n1 >= 70 && n2 >= 70 && n3 >= 70 && n4 >= 70 && n5 < 70) {
        printf("Classificação C – passou em I e II, III ou IV, mas não em V");
        
    } else {
        printf("Reprovado");
    };
    
    
}//fim do main 
