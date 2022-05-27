//Aula-19
//Ex-14

#include <stdio.h>

int main(){
	//O operador "long" serve para dobrar o espaço de memória.
	//O tipo "int" por padrão já é "long int".
	//Usado no tipo "long int", vai de 4 bytes de tamanho para 8 bytes de tamanho.
	
	short int a;
	int b;
	long int c;
	long long int d;

	printf("short int: %d\nint: %d\nlong int: %d\nlong long int: %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

	printf("\n#Tecle enter para sair#");
	//Limpeza de buffer
	getchar();
	getchar();
	
	return 0;
};
