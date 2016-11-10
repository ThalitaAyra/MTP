#include <stdio.h>
#define MAXPILHA 10 //tamanho maximo da pilha
typedef char DADO; // muda o tipo da Pilha aqui
typedef struct Pilha_ {
    int idtopo;
    DADO dados[MAXPILHA];
} Pilha;
void push(Pilha * ppilha, DADO elemento);
void pop(Pilha * pilha);
DADO top(Pilha pilha);
int empty(Pilha pilha);
int main (){
    int i;
    Pilha pilha;
    pilha.idtopo = -1; //Pilha vazia
    //inicio do programa
    printf("Push: ");
    for(i = 0; i < 5; i++){
        push(&pilha,'A' + i); //testa push
        printf("%c",top (pilha));
    }
    printf("\nPop:  ");
    while(!empty(pilha)){ //testa empty
        printf("%c ", top(pilha)); //testa top
        pop(&pilha); // testa pop
    }
    printf("\nEstouro?: ");
    for(i = 0; i < MAXPILHA + 1; i++){
        push(&pilha,'A' + i);
        printf("%c ", top(pilha));
    }
    return 0;
}
void push(Pilha * ppilha, DADO elemento){
    if (ppilha-> idtopo + 1 < MAXPILHA){
        ppilha->idtopo++;
        ppilha->dados [ppilha->idtopo]= elemento;
    }
    else
        fprintf(stderr, "\nERRO :: Estouro de pilha!\n");
}
void pop(Pilha * ppilha){
    if (ppilha->idtopo >= 0){
         ppilha->dados [ppilha->idtopo]= 0x0; //"limpa elemento"
        ppilha->idtopo--;
    }
    else
        fprintf(stderr, "\nWARNING :: Pilha vazia!\n");
}
DADO top(Pilha pilha){
    return pilha.dados [pilha.idtopo];
}
int empty(Pilha pilha){
    return (pilha.idtopo == -1);
}
