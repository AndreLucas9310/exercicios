#include <stdio.h>

int main(){
	int idade;
	char sexo;
	float peso, altura;

	printf("Digite seu sexo f ou m, sua idade, peso e altura: ");
	scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
	printf("Sexo: %c\nIdade: %d\nPeso: %f\nAltura: %f\n", sexo, idade, peso, altura);
	
	printf("\n#Tecle enter para sair#");
	//Limpeza do buffer.
	getchar();
	getchar();

	return 0;
};
