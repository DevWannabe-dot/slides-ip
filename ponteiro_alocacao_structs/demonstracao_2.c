#include <stdlib.h>
#define SUCESSO		(0)

int main(int argc, char** argv) {
	int estatico[50];					 // 50x tamanho de int
	int* dinamico = malloc(sizeof(int) * 50);		 // 50x tamanho de int
	dinamico = realloc(dinamico, sizeof(int) * 100); // 100x tamanho de int
	free(dinamico);					 // foi pro saco kk
	return SUCESSO;
}
// podes aumentar 'dinamico' e descartá-lo quando não precisar mais
// estatico = paia