/*O que sera impresso abaixo?*/

#include <stdio.h>

int main()
{	
	int n1,n2,n3;
	
	printf("Entre com um numero inteiro: ");
	scanf("%d", &n1);
	n1 += n1 * 10;
	n2 = n1/5;
	n3 = n2%5 * 7;
	n2 *= n3-- % 4;
	printf("%d %d %d", n2, n3, n2 != n3 + 21);
}
