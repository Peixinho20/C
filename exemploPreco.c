#include <stdio.h>
#define PRECO 1.99

int main()
{
	int pera = 3;
	char qualidade ='A';
	float peso = 2.5;
	
	printf("Existem %d peras de qualidade %c.", pera, qualidade);
	printf("Pesando %f quilos.\n", peso);
	printf("O preco por quilo eh %f, total eh %f\n", PRECO, peso*PRECO);
	
	return 0;
	}
