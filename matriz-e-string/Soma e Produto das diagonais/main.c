#include <stdio.h>
#define LIN 2
#define COL 2


void main() {

	int matriz[LIN][COL];
	int iCont, jCont;
	int diagonalSoma, diagonalProduto;

	for(iCont = 0; iCont < LIN; iCont++) {
		for(jCont = 0; jCont < COL; jCont++) {
			printf("Informe o elemento (%d, %d) da matriz: ", iCont, jCont);
			scanf("%d", &matriz[iCont][jCont]);
		}
	}

	for(iCont = 0; iCont < LIN; iCont++) {
		for(jCont = 0; jCont < COL; jCont++)
			printf("%d ", matriz[iCont][jCont]);
		printf("\n");
	}

	diagonalSoma = 0;
	for(iCont = 0; iCont < LIN; iCont++)
		for(jCont = 0; jCont < COL; jCont++)
			if(iCont == jCont) {
				diagonalSoma += matriz[iCont][jCont];
			}
	printf("Soma da diagonal principal: %d \n", diagonalSoma);


	diagonalProduto = 1;
	for(iCont = 0; iCont < LIN; iCont++)
		for(jCont = 0; jCont < COL; jCont++)
			if(iCont + jCont == LIN - 1) {
				diagonalProduto *= matriz[iCont][jCont];
			}
	printf("Produto da diagonal secundaria: %d \n", diagonalProduto);


}