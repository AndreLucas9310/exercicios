//Aula 21 e 22
//Ex15

#include <stdio.h>

int main(){
	//O tipo double na maioria das linguagens tem 8 bytes de tamanho. Enquanto o tipo float tem 4.
	//O tipo double tem o dobro de precisão comparado ao tipo float.
	
	//O tipo double com o operador long dobra seu tamanho, indo de 8 para 16 bytes.
	long double a = 1.9484848494858548848558488686;

	printf("float: %d\ndouble: %d\nlong double: %d\na: %Lf", sizeof(float), sizeof(double), sizeof a, a);
	
	printf("\n#Tecle enter para sair#");
	//Limpeza de buffer
	getchar();
	getchar();
	
	return 0;
};
