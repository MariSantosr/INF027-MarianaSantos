#include <stdio.h>
#define MAX_STR 500
#define SPACE 32

void main() {

	char original[MAX_STR];
	char matricula[MAX_STR];
	char dominio[] = "@inf027.edu.br";
	int ndxOriginal, ndxMatricula, ndxDominio;
	int tamanho;


	printf("Informe o nome do contratado: \n");
	fgets(original, MAX_STR, stdin);

	for(tamanho = 0; original[tamanho] != '\0' && original[tamanho] != '\n'; tamanho++);
	
    //Primeiro nome: converte os caracteres para minúsculo
	for(ndxOriginal = ndxMatricula = 0; original[ndxOriginal] != SPACE; ndxOriginal++, ndxMatricula++)
    	if(original[ndxOriginal] >= 'A' && original[ndxOriginal] <= 'Z') 
    		matricula[ndxMatricula] = original[ndxOriginal] - 'A' + 'a';
    	 else 
    		matricula[ndxMatricula] = original[ndxOriginal];
    	
    //Adiciona o ponto entre o nome e o sobrenome
	matricula[ndxMatricula++] = '.';
	
	
    //Está varrendo o código começando do final para achar o sobrenome final 
	for(ndxOriginal = tamanho; original[ndxOriginal] != SPACE; ndxOriginal--);
	
    //Sobrenome: converte os caracteres para minusculo
	for(ndxOriginal = ndxOriginal + 1; ndxOriginal < tamanho; ndxOriginal++, ndxMatricula++)
		if(original[ndxOriginal] >= 'A' && original[ndxOriginal] <= 'Z') 
			matricula[ndxMatricula] = original[ndxOriginal] - 'A' + 'a';
		else 
			matricula[ndxMatricula] = original[ndxOriginal];
		
    //Adiciona o dominio
	for(ndxDominio = 0; dominio[ndxDominio]; ndxDominio++, ndxMatricula++)
		matricula[ndxMatricula] = dominio[ndxDominio];

	matricula[ndxMatricula] = '\0';

	printf("Matricula gerada para o funcionario: %s\n", matricula);

}