//Exercício 4 do curso de c

#include <stdio.h>

int main(){
	float valor1;
	
	printf("Digite um o valor: ");
	//Para valor real é nescessário usar o "%f".
	scanf("%f", &valor1);
	printf("valor1: %f\n", valor1);
	
	printf("# Tecle enter para finalizar o programa #\n");
	//Limpeza de buffer
	getchar():
	getchar();
	
	return 0;
};
