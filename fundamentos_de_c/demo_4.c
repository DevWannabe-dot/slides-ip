#include <stdio.h>
#define SUCESSO		(0)

int funcao_soma(int termo_a, int termo_b) {
	return termo_a + termo_b;
}

int main(int argc, char** argv) {
	printf("%d", funcao_soma(5, 15));

	return SUCESSO;
}