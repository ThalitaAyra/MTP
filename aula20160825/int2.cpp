#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int base, potencia, resultado, i;
	printf("Digite o valor da base: ");
	scanf("%d",&base);
	printf("\nDigite o valor da potencia: ");
	scanf("%d", &potencia);
	resultado=1;
	for(i=0; i<potencia; i++)
	resultado=resultado*base;
	
	printf("\nO resultado e:%d ", resultado);
	
	
	
 
     return 0;	
}
