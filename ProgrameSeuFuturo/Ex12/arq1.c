//Ex-12
//Entendendo o funcionamento do comando "sizeof".

#include <stdio.h>

int main(){
	int variavel1;
	float variavel2;
	
	variavel1 = 37838;
	variavel2 = 14.34556726;

	printf("Tamanho variavel1: %d\nTamanho variavel2: %d\n\n", sizeof variavel1, sizeof variavel2);
	
	printf("Tamanho int: %d\nTamanho char: %d", sizeof(int), sizeof(char));
	
	printf("\n#Tecle enter para sair#");
	//Limpeza de buffer
	getchar();
	getchar();
	
	return 0;
};
