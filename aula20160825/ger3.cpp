#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, i, soma;
	
	printf("Digite um numero");
	scanf("%d", &num);
	soma=0;
	for(i=1; i<num; i++)
	{
		if(num%i==0)
		soma=soma+i;
	}
	if(soma==num)
	printf("%d e um numero perfeito", num);
	else
	printf("Nao e um numero perfeito");
	
	return 0;
	
}
