/*Exemplo idade*/

#include <stdio.h>

int main()
{
	int idade;
	
	idade = 17;
	printf("Pode tirar a CNH? %d\n", idade >= 18);
	/*O resultado será 0, que significa Falso*/
	
	idade = 35;
	printf("Pode tirar a CNH? %d\n", idade >= 18);
	/*O resultado será 1, que significa Verdadeiro*/	
	}
