#include <stdio.h>

void main(){
    
   int numDecimal;
   int num;
   int b0,b1,b2,b3,b4,b5;
   int mutacao;
   
   printf("Digite um número decimal entre 0 e 35: \n");
   scanf("%d", &num);
   printf("Qual bit entre 0 e 4 quer alterar o valor? \n");
   scanf("%d", &mutacao);
   
   numDecimal = num;
   
   b5 = num%2;
   num = num/2;
   b4= num%2;
   num = num/2;
   b3= num%2;
   num= num/2;
   b2= num%2;
   num= num/2;
   b1= num%2;
   num= num/2;
   b0= num%2;
   
   switch (mutacao) {
       
       case (1): 
       if(b0 == 1){
         b0= 0;
       } else {
         b0 =1;
       }
       break;
       
       case (2):
       if(b1 == 1){
         b1= 0;
       } else {
         b1 =1;
       }
       break;
       
       case (3):
       if(b2 == 1){
         b2= 0;
       } else {
         b2 =1;
       }
       break;
       
       case (4):
       if(b3 == 1){
         b3= 0;
       } else {
         b3 =1;
       }
       break;
       
       case (5):
       if(b4 == 1){
         b4= 0;
       } else {
         b4= 1;
       }
       break;
      
   }//fim do switch case 
   
   
   printf("O número em decimal inicial é: %d \n", numDecimal);
   printf("O valor após a mutação: %d%d%d%d%d%d \n", b0,b1,b2,b3,b4,b5);
   printf("O novo valor em decimal é: %d", (b0*32)+(b1*16)+(b2*8)+(b3*4)+(b4*2)+b5);
   
   
}