#include <stdio.h>
#include <stdlib.h>
#define SUCESSO		(0)

typedef struct estrutura_coordenada_tridimensional{
	int x;
	int y;
	int z;
} coord_t;

int main(int argc, char** argv) {
	coord_t* coord = (coord_t*) malloc(sizeof(coord_t)); // note que se aloca o tamanho do TIPO, não da struct em si
	if (coord) {										 // executa somente se o ponteiro não for nulo
		(*coord).x = 0;
		(*coord).y = 10;
		(*coord).z = 5;

		printf("|%d %d %d|\n", (*coord).x, (*coord).y, (*coord).z);

		coord->x = 5;
		coord->y = 0;
		coord->z = 10;

		printf("|%d %d %d|\n", coord->x, coord->y, coord->z);
	}
	free(coord);
	return SUCESSO;
}