#include <stdio.h>
#define SUCESSO		(0)

int main(int argc, char** argv) {
	int i = 0, * vetor_dinamico = NULL; // inicializa ponteiro com nada

	do {
		vetor_dinamico = realloc(vetor_dinamico, (sizeof(int) * i));
		// realoca a: número de cadastros x int

		printf("\nPreencha o registro [%d] de seu vetor: ", i);
		scanf("%d", &vetor_dinamico[i]);
		i++;
	} while (vetor_dinamico[i - 1] != 0); // interromper se receber ‘0’

	return SUCESSO;
}