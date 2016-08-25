#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int num, num1, num2=0;
	
	srand(time(0));
	num=rand()%100;
	
  
   
	while(num2==0)
	{
		printf("Digite um numero: ");
		scanf("%d", &num1);
		if(num1==num)
		{
			num2=1;
			printf("Voce acertou!!");
		}
		else
		{
			if(num<num1)
			printf("Alto\n");
			else
			printf("Baixo\n");
			
			
		}
		
	}

	return 0;
	
}
