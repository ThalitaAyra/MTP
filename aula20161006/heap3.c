#include <stdio.h>
#include <stdlib.h>
char * iniciaTexto();
void recebeTexto(char ** texto);
int main(){
    char * texto = iniciaTexto();
    printf("::: Incio :::::::::::::\n");
    recebeTexto(&texto);
    printf("::: Incio :::::::::::::\n");
    printf("%s\n", texto);
    printf("\nTamanho da string: %d\n", strlen(texto));
    return 0;
}
char * iniciaTexto() {
    char * texto = (char*) malloc(sizeof(char));
    texto[0] = '\0';
    return texto;
}
void recebeTexto(char ** texto) {
    char * aux;
    int c, tamanho = 0;
    do {
        c = getchar();
        if(c != '#') {
            aux = (char *) realloc(*texto, tamanho+2);
            if(aux != NULL) {
            *texto = aux;
            (*texto)[tamanho] = c;
            tamanho++;
            (*texto)[tamanho] = '\0';
        }
        else printf("\n** Erro! Sem memoria! **\n");
        }
    } while(c != '#');
}
