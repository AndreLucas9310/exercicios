#include <stdio.h>

int main(){
	int idade;
	float peso, altura;
	char sexo;
	
	//O espaço entre "%f" e "%c" é para dizer ao computador para ignorar espaço, ENTER e tabulação.
	scanf("%d%f%f %c",&idade,&peso,&altura,&sexo);
	printf("idade: %d\npeso: %f\naltura: %f\nsexo: %c\n",idade,peso,altura,sexo);

	printf("\n#Tecle enter para sair#");
	//Para limpar o buffer do teclado.
	getchar();
	getchar();

	return 0;
};
