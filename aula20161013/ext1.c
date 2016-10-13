#include <stdio.h>
#include <stdlib.h>
int TAMANHO = 0;
float *recebeNumero(float *vetor);
float media(float *vetor, int tamanho);
float maior(float *vetor, int tamanho);
float menor(float *vetor, int tamanho);
int main()
{
	float *vetor = NULL;
	int opc, i;
	do
	{
		printf("Entre com um numero: ");
		vetor = recebeNumero(vetor);
		printf("Media: %f\n", media(vetor, TAMANHO));
		printf("Maior: %f\n", maior(vetor, TAMANHO));
		printf("menor: %f\n", menor(vetor, TAMANHO));
		printf("Outro? (0 - nao, 1 - sim): ");

		scanf("%d", &opc);
	}while(opc!=0);

	free(vetor);
	return 0;
}

float *recebeNumero(float *vetor)
{
	TAMANHO++;

	if(vetor == NULL)
	{
		vetor=(float *) malloc(sizeof(float));
	}
	else
	{
	    vetor=(float *) realloc(vetor,TAMANHO*sizeof(float));

	}
	scanf("%f", &vetor[TAMANHO-1]);
	return vetor;
}
float media(float *vetor, int tamanho)
{
	int i;
	float soma=0.f;
	for(i=0; i<tamanho; i++)
		soma=soma+vetor[i];

	return soma/tamanho;
}
float maior(float *vetor, int tamanho)
{
	int i;
	float maior=vetor[0];
	for(i=0; i<tamanho; i++)
		if(maior<vetor[i])
		 maior=vetor[i];

	return maior;
}
float menor(float *vetor, int tamanho)
{
	int i;
	float menor=vetor[0];
	for(i=0; i<tamanho; i++)
		if(menor>vetor[i])
		 menor=vetor[i];

	return menor;
}
