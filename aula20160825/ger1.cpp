#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, valor, i;
	printf("Digite um numero:");
	scanf("%d", &num);
	
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		{
		printf("Numero nao primo!");
		break;
	    }
	}
	if(i==num)
	    printf("Numero e primo");
	}
