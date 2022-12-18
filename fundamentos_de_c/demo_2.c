#include <stdio.h>
#define SUCESSO		(0)

int main(int argc, char** argv) {
	int n;
	char lixo;

	printf("Insira seu numero: ");
	scanf("%d%c", &n, &lixo);

	if (n > 0) { // SE numero for maior que 0
		printf("\nO numero dado eh inteiro e POSITIVO.");
	}
	else if (n < 0) { // SENAO, SE for maior que 0, e sim menor que 0
		printf("\nO numero dado eh inteiro e NEGATIVO.");
	}
	else { // SENAO, eh 0
		printf("\nProvavelmente, o numero dado eh 0. Acertei?");
	}

	return SUCESSO;
}