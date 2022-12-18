#include <stdio.h>
#define SUCESSO		(0)

int main(int argc, char** argv) {
	int* p; // Declaração de um ponteiro de tipo 'int'
	int n; // Declaração de um inteiro
	
	n = 106; // Inicializa 'int n' como 106
	p = &n; // Inicializa 'int* p' com o endereço de 'n'

	printf("%d %d\n", n, *p);
	// Imprime o valor de 'n' e o valor para onde aponta 'p'
	
	n = 107;
	printf("%d %d\n", n, *p);

	return SUCESSO;
}