#include <stdio.h>

void main() {

	int numero;
	int soma;

	soma = 0;

	for(numero = 1; numero <= 100; numero++) {
		printf("%d \n", numero);

		soma = soma + numero;

	}

	printf("A soma total dos nC:mero C): %d \n", soma);


}
