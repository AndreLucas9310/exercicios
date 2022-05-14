//Exercício 8 do curso de c

#include <stdio.h>

int main(){
	char letra;

	printf("Digite um caractere: ");
	//O "f" de "fgetc()" significa files.
	//O "stdin" de "fgetc(stdin)" significa que o local que a função tem que ler é o teclado.
	letra = getc(stdin);
	printf("letra: %c\n\n", letra);
	
	printf("$Digite qualquer valor para sair$\n");
	getchar();
	
	return 0;
};
