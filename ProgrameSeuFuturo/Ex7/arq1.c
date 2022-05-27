//Exercício 7 do curso de c

#include <stdio.h>

int main(){
	char letra;
	printf("Digite um caractere: ");
	//A função "getc()" precisa de um parâmetro para funcionar. E não é usada apenas para ler dígitos do teclado.
	letra = getc(stdin);
	printf("letra: %c\n", letra);

	printf("\n#Tecle enter para sair#");
	//Limpeza de buffer.
	getchar();
	getchar();
	
	return 0;
};
