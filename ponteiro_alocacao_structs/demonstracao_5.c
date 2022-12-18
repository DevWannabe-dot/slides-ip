#include <stdio.h>
#define SUCESSO		(0)

struct registro_clinico_s {
	int id_do_paciente;
	char tipo_sanguineo;
};

int main(int argc, char** argv) {
	struct registro_clinico_s hospital_local; // Declaração de uma variável do tipo definido (linha 4)
	hospital_local.id_do_paciente = 1;		  // Inicialização
	hospital_local.tipo_sanguineo = 'A';	  // dos valores
	printf("\n%d:%c", hospital_local.id_do_paciente, hospital_local.tipo_sanguineo);
	return SUCESSO;
}