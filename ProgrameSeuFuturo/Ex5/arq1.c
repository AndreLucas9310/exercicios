//Exercício 5 do curso de c

#include <stdio.h>

int main(){
	char valor1;

	printf("Digite um valor: ");
	//"%d" é para inteiros "%f" é para reais "%c" é para caracteres.
	scanf("%c", &valor1);
	printf("valor1: %c\n", valor1);

	printf("#Tecle enter para sair#");
	//Limpeza de buffer
	getchar();
	getchar();

	return 0;
};
