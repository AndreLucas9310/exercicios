//Exercício 9 do curso de c

#include <stdio.h>

void func1();

int main(){
	int valor1, valor2, valor3, i;
	
	printf("Digite três números: ");
	scanf("%d%d%d", &valor1, &valor2, &valor3);
	printf("valor1: %d\nvalor2: %d\nvalor3: %d\n", valor1, valor2, valor3);

	printf("\n#Tecle enter para sair#");
	//Limpeza de buffer.
	getchar();
	getchar();

	return 0;
};
