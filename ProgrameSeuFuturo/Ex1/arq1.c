#include <stdio.h>
 
//Testanto os valores que a função "printf()" retorna.
int main(){
	printf(": %d", printf("valor"));
	
	printf("$\nDigite qualquer valor para sair$");
	//Limpeza de buffer
	getchar();
	getchar();

	return 0;
}
 
