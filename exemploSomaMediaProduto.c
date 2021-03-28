/*escreva um programa que leia 3 números inteiros e calcule a soma, 
média, e produto.*/

#include <stdio.h>

int main()
{
	int n1,n2,n3;
	
	printf("Entre com tres numeros inteiros (de espaco entre eles): ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("\nA soma vale %d", n1 + n2 + n3);
	printf("\nA media vale %8.2f", (n1+n2+n3)/3);
	printf("\nO produto vale %d", n1*n2*n3);
	}
