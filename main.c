/*
EJEMPLO DE USO DE LA LIBRERÍA to_bin.
Organización de Computadoras 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include "to_bin.h"

int main(int argc, char **argv)
{	
	int i = -500;
	unsigned int ui = 2147483650;
	
	float f = -3.839388E-27;
	double d = 2.2345234E10;
	
	struct st_t {
		float c;
		int i;
	};
	
	struct st_t st;
	st.c = -1.0f;
	st.i = 8;		

	char* si = int_to_bin(i);
	char* sui = u_int_to_bin(ui);
	char* sf = float_to_bin(f);
	char* sd = double_to_bin(d);

	// Usar la función genérica para tipos de datos estructurados
	char* sst = to_binary_string(&st, sizeof(struct st_t), 1, 1);

	// Usar la función genérica para tipos de datos simples 
	char* sst = to_binary_string(&st, sizeof(struct st_t), 1, 1);

	printf("int i = -500; >> %s\n", si);
	printf("unsigned int ui = 2147483650; >> %s\n", sui);
	printf("float f = -3.839388E-27; >> %s\n", sf);
	printf("double d = 2.2345234E10; >> %s\n", sd);
	printf("struct st_t st; ...  >> %s\n", sst);
	
	free(si);
	free(sui);
	free(sf);
	free(sd);
	free(sst);
	
	return 0;
}
