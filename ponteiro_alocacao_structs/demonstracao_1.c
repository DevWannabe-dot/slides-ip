#include <stdio.h>
#define SUCESSO		(0)

int main(int argc, char** argv) {
	int* p; // Declara��o de um ponteiro de tipo 'int'
	int n; // Declara��o de um inteiro
	
	n = 106; // Inicializa 'int n' como 106
	p = &n; // Inicializa 'int* p' com o endere�o de 'n'

	printf("%d %d\n", n, *p);
	// Imprime o valor de 'n' e o valor para onde aponta 'p'
	
	n = 107;
	printf("%d %d\n", n, *p);

	return SUCESSO;
}