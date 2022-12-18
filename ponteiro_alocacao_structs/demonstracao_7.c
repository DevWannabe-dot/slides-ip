#include <stdio.h>
#define SUCESSO				(0)
#define NUMERO_DE_FICHAS	(50)

typedef struct ficha_s{
	int idade;
	int altura;
} ficha_t;

int main(int argc, char** argv) {
	ficha_t ficha[NUMERO_DE_FICHAS];
	int i, ficha_solicitada;

	ficha[0].idade = 50;
	ficha[0].altura = 170;

	for (i = 1; i < NUMERO_DE_FICHAS; i++) {
		ficha[i] = ficha[i-1];
	}

	printf("Qual ficha deseja acessar <1 a 50> ? ");
	scanf("%d", &ficha_solicitada);

	printf("\n%d e %d\n", ficha[ficha_solicitada-1].idade, ficha[ficha_solicitada-1].altura);

	return SUCESSO;
}