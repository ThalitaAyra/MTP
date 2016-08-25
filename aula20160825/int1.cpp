#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, i, fatorial;
	printf("Digite um numero: ");
	scanf("%d", &num);
	fatorial = 1;
	for(i=2; i<=num; i++)
	{
		fatorial = fatorial*i;
	}
	printf("\nFatorial de %d = %d \n", num, fatorial);
	
	
	
	return 0;
}

