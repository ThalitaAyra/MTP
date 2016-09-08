#include <stdio.h>
#include <ctype.h>
#include <string.h>
 int main (){
     int i;
 char frase [256];
printf("Entre com uma frase: ");
gets (frase);
for (i= 0; frase [i]; i++)
    frase[i]= toupper (frase[i]);
printf("%s\n", frase);
printf("A frase tem %d caracteres. \n", strlen (frase));
if(strncmp (frase,"BOM DIA",7)==0)
printf("Bom dia pra voce tambem!\n");
else
    printf("Voce quer dizer : %s?", frase);
return 0;
 }
