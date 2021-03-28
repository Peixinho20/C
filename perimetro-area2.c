/*Calcular o perímetro e a area de uma circunferencia de raio R 
 * (fornecido pelo usuario)*/

#include <stdio.h> /*inclui diretivas de entrada e saída*/
#include <math.h> /*inclui diretivas das funcoes matematicas*/

#define PI 3.14159

int main()
{
	/*Definir variaveis*/
	int Raio;
	float Perim, Area;
	
	/*Obter raio da circunferencia*/
	printf("Entre com o valor do raio: ");
	scanf("%d", &Raio);
	
	/*Calcular perimetro do circulo*/
	Perim = 2*PI*Raio;
	
	/*Calcular Area da Circunferencia*/
	Area = PI*Raio*Raio; /*PI * pow(Raio, 2); Nao esta aceitando pow*/
	
	/*Exibir resultados*/
	printf("O perimero da circunferencia de raio %d eh %.2f \n", Raio, Perim);
	printf("e a area eh %.2f", Area);	
	}
