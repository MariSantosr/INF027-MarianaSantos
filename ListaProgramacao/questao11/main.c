#include <stdio.h>

void main()
{
    float notaSemestral;
    float n1, n2, n3, n4;
    float notaBimestre1;
    float notaBimestre2;
    
    printf("Informe as notas do primeiro Bimestre: \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    
    printf("Informe as notas do segundo Bimestre: \n");
    scanf("%f", &n3);
    scanf("%f", &n4);
    
    notaBimestre1 = n1 + n2;
    notaBimestre2 = n3 + n4;
    
    notaSemestral = (notaBimestre1+notaBimestre2) /4;
    
    printf("A média semestral é: %.2f ", notaSemestral);
}
