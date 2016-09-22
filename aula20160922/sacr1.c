#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pega_carta();
char figura_carta (int carta);
int main(){
    srand(time(0));
    int carta1= pega_carta(), carta2 = pega_carta();
    int i, ncartas, carta, soma =0;
    printf("Quantas cartas voce quer? ");
    scanf("%d", &ncartas);
    for (i= 0; i < ncartas; i++){
      carta = pega_carta();
      printf("%c", figura_carta(carta));
      soma = soma+ ((carta> 10)? 10: carta);
    }

    if (soma > 21)
        printf("\n Voce perdeu!\n");
        else{
           printf("\nBanca: %c %c\n", figura_carta(carta1),figura_carta(carta2));
           if (soma > ((carta1 > 10)? 10: carta1)+((carta2> 10) ? 10: carta2))
            printf("\n Voce ganhou!\n");
           else
            printf("\n Voce perdeu!\n");
        }
    return 0;
}
int pega_carta (){
    int carta= rand()%13 +1;
    return carta;
}

char figura_carta(int carta){
    char figura;
    switch (carta){
        case  1: figura = 'A'; break;
        case 10: figura = 'D'; break;
        case 11: figura = 'J'; break;
        case 12: figura = 'Q'; break;
        case 13: figura = 'K'; break;
        default: figura = 48 + carta;

      }
      return figura;
}
