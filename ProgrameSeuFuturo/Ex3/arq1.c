#include <stdio.h>

//Demonstração de como criar variáveis, e armazenar valores com o input do usuário.
int main(){
	int valor1; //Uma variável de tipo inteiro e de nome "valor1" para armazenar um número inteiro;
	float valor2; //Uma variável do tipo float e de mome "valor2" para armazenar um valor real.
	char valor3; //uma variável do tipo char de nome "valor3" para armazenar uma letra.
	printf("Digite a sua idade: ");
	scanf("%d", &valor1); /* O "%d" é pra dizer que o dado a ser recebido é um número inteiro.O "&" na
	frente de "valor1" quer dizer que ele vai pegar o endereço da variável.*/
	printf("Sua idade é: %d\n", valor1);

	printf("# Tecle enter para finalizar o programa #");
	//Limpeza de buffer
	getchar();
	getchar();

	return 0;
};
