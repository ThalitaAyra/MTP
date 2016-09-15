#include <stdio.h>
#define QTDEMAX 1000
struct CAD{
int idade;
};
int main (){
int opc, i, qtde = 0;
struct CAD cadastro [QTDMAX];
while (1) {
    printf("1- cadastra. 2-sair;")
    scanf("%d", &opc);
    if (opc == 2) break;
    cadastro [qtde]. idade = 3;
    qtde ++;
}
for (i= 0; i < qtde; i++)
    mostra (cadastro[i]);
return 0;
}
