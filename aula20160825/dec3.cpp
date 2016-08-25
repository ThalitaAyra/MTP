#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	int dado1, dado2, dado3, resultado;
	srand(time(0));
	dado1=rand()%7;
	dado2=rand()%7;
	dado3=rand()%7;
	
	resultado=dado1+dado2+dado3;
	
	if(resultado==7||resultado==11)
	printf("Voce ganhou!!!");
	else
	printf("Voce perdeu!!!");
	
	
	
	
	
    return 0;	
}
