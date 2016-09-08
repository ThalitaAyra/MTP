#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

int valores[10];
int indice;
 printf("Escreva 10 numeros inteiros: ");
for (indice = 0; indice < 10; indice++) {
 scanf("%d", &valores[indice] );
 }
 printf("Valores em ordem reversa:\n");
for (indice = 9; indice >= 0; indice--) {
 printf("%d ", valores[indice]);
 }
return 0;
}
