#include <stdio.h>

void main()
{
    int n1, n2, n3;
    
    printf("Digite 3 números: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if(n1 > n2 && n1 > n3) {
        printf("O maior número é: %d", n1);
    } else if (n2 > n1 && n2 > n3){
        printf("O maior número é: %d", n2);
    }else if (n3 > n1 && n3 > n2) {
        printf("O maior número é: %d", n3);
    };


}//fim do main
