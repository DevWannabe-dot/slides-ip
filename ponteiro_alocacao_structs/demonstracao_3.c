#include <stdio.h>
#define SUCESSO		(0)

int main(int argc, char** argv) {
	int i = 0, vetor_estatico[250]; // desperdício desnecessário de 1KB!

	do {
		printf("\nPreencha o registro [%d] de seu vetor: ", i);
		scanf("%d", &vetor_estatico[i]);
		i++;
	} while (vetor_estatico[i - 1] != 0); // interromper se receber ‘0’

	return SUCESSO;
}