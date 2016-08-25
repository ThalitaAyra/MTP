#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int a, b, c;
	printf("Digite um valor: ");
	scanf("%d", &a);
	srand(time(0));
	b=rand()%2;
	c=a+b;
	if(c%2==0)
	printf("%d e um numero par", c);
	else
	printf("%d e um numero impar", c);

	
	
	
	
      return 0;	
}
