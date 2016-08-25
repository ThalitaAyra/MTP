#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	printf("Digite um numero: ");
	scanf("%d",&a);
	if(a%2==0)
	printf("\n%d e um numero par", a);
	else
	printf("%d e um numero impar", a);
	
	if(a%3==0)
	printf("\n%d e um multiplo de 3\n", a);

	
	if(a%5==0)
	printf("\n%d e um multiplo de 5\n", a);

	
	if(a%7==0)
	printf("\n%d e um multiplo de 7\n", a);

	
       return 0;     	
}
