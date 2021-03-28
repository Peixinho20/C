/*Escreva um programa em C que encontre o menor inteiro positivo n que 
atenda as seguintes condições :

n / 3 = x inteiro e resto 2
n / 5 = y inteiro e resto 3
n / 7 = z inteiro e resto 4
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	n = 0;
	
	while (n%3 != 2){	
			n += 1;
		}
	printf("%d",n);	
}
