#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void parabens();
int main() {
        parabens();
}
void parabens() {
    srand(time(0));
    int escolha, sorteio;
    printf("Escolha um numero de 1 a 10:" );
    scanf("%d", &escolha);
     if(escolha > 10){
        printf("\nNumero invalido\n");
        return;
         }
    sorteio = (rand()%10 + 1);
    if(sorteio == escolha)
        printf("\nParabens voce acertou!");
    else
        printf("\nVoce errou!\n");
}
