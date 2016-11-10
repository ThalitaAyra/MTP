#include <stdio.h>
#include <stdlib.h>
typedef char DADO; // muda o tipo da pilha aqui

typedef struct Pilha_ {
  DADO topo;
  struct Pilha_ * proximo;
} Pilha;
void push(Pilha ** ppilha, DADO elemento);
void pop(Pilha ** pilha);
DADO top(Pilha * pilha);
int empty(Pilha * pilha);
int main (){
    int i;
    Pilha * pilha= NULL; //Pilha Vazia
    //inicio do programa
    printf("Push: ");
    for(i = 0; i < 5; i++){
        push(&pilha, i); //testa push
        printf("%d",top (pilha));
    }
    printf("\nPop:  ");
    while(!empty(pilha)){ //testa empty
        printf("%d ", top(pilha)); //testa top
        pop(&pilha); // testa pop
    }
    printf("\n");
    return 0;
}
void push(Pilha ** ppilha, DADO elemento){
   Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
   novo->topo= elemento;
   novo-> proximo = *ppilha;
   *ppilha = novo;
}
void pop(Pilha ** ppilha){
    Pilha * aux = NULL;
    if (!empty(*ppilha)){
        aux = (*ppilha)-> proximo;
        free (*ppilha);
        *ppilha = aux;
    }
    else
        fprintf(stderr, "\nWARNING :: Pilha vazia!\n");
}
DADO top(Pilha * pilha){
    return pilha-> topo;
}
int empty(Pilha * pilha){
    return (pilha == NULL);
}
