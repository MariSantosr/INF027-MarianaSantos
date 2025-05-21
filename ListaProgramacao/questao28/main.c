#include <stdio.h>

void main()
{
    
    char letra;
    
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("%c é uma vogal", letra);
    } else {
        printf("%c é uma consoante", letra);
    };
    
    
}
