/*Escreva um programa que leia um número inteiro e imprima 0 se o número for par e 1 se o
número for ímpar.*/

#include <stdio.h>

int main() {
	
	int numero;
	printf("Entre com numero inteiro: ");
	scanf("%d", &numero);
	printf("\nPar? %d\n", numero%2 == 0);
	/*Se a resposta for 0 é falso e se for 1 é verdadeiro*/
	}
