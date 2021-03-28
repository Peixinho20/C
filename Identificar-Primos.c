/*Escreva um programa em C que verifique se um determinado inteiro positivo que é lido via teclado, é ou
não primo.*/

#include <stdio.h>

int main(){

    int n,i,cont;

    printf("Digite um valor: ");
    scanf("%d",&n);
    cont = 0;
    
    for(i=2; i<= n; i++){ 
		if(n%i == 0){ /*Se o resto da divisao de n por i for igual a zero*/
			cont = cont + 1;/*Contador de divisao com resto zero*/
			}
		} 
	if (cont == 1){/*No contador ja eh previsivel que tera uma divisao com resto zero, n%n == 0, se tiver mais de uma divisao com resto 0 ele imprimira o else */
		printf("\n%d Eh primo",n);
		}	
	else{
		printf("\n%d Nao eh primo",n);
		}			
    
	return 0;
}
