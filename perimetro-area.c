/*Calcular o perímetro e a area de uma circunferencia de raio R 
 * (fornecido pelo usuario)*/
 
#include <stdio.h>

int main()
{

	int Raio;
	float Perim, Area, PI;
	PI = 3.14159;
	
	printf("Entre com o valor raio: ");
	scanf("%d", &Raio);
	Perim = 2*PI*Raio;
	Area = PI*Raio*Raio;
	
	printf("O perimetro da circunferencia de raio %d eh %.2f\n",Raio,Perim);
	printf("\nE a area eh %.2f", Area);
	
	return 0;
} 


