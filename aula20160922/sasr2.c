#include <stdio.h>
#include <stdlib.h>

void impar();
void par();

int main()
{
	int num;
	do
	{
	printf("Digite 1 para sequencia impar e 2 para sequencia par e 0 para sair\n");
	scanf("%d", &num);
	if(num==1)
		impar();

	else if(num==2)
		par();
	}while(num!=0);

	return 0;
}
void impar()
{
	printf("1, 3, 5, 7, 9\n");
}
void par()
{
	printf("2, 4, 6, 8, 10\n");
}






