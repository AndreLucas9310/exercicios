//Ex-13
//Entendendo o funcionamento do operador "short".
//O short serve para otimizar, reduzir o tamanho de memória usada pela variavel.
//"short" é recomendado para o uso valores pequenos.

#include <stdio.h>

int main(){
	//O tipo int tem 4 bytes de tamanho.
	int a = 10;
	//Quando aplicado o operador short seu tamanho reduz de 4  para 2 bytes.
	short int b = 10;

	printf("Tamanho a: %d\nTamanho b: %d", sizeof(a), sizeof(b));

	a = NULL;
	printf("\n\nValor a: %d", a);
	
	printf("\n#Tecle enter para sair#");
	//Limpeza de buffer
	getchar();
	getchar();
	
	return 0;
};
