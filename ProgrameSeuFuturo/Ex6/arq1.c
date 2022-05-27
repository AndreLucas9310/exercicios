//Exercício 6 do curso de c

#include <stdio.h>

int main(){
	char letra;

	//A função "getchar()" não precisa de parâmetros.
	//Dá pra usar assim: getchar(letra) ou assim: letra = getchar()
	printf("Digite uma letra: ");
	letra = getchar();
	printf("\nletra: %c\n", letra);

	printf("\n\n**Digite qualquer valor para sair**\n\n");
	//Limpeza de buffer
	getchar();
	getchar();
	
	return 0;
};
