#include<stdio.h>
#include <ctype.h>
int main(){
    char frase [256];
    char observador;
    int indice = 0;
    printf("Entre com uma frase:");
    gets(frase);
    observador = frase [indice];
while(observador != '\0'){
    frase [indice] = tolower(observador);
    indice ++;
    observador = frase [indice];
}
printf("%s\n", frase);
return 0;
}

