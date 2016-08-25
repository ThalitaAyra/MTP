#include <stdio.h>

int main (){
float base, altura, area;
printf("Entre com a base:");
scanf ("%f", &base);
printf("Entre com a altura:");
scanf("%f", &altura);
area=base*altura;
printf("A area da base %.1f com a altura %.1f e de %.1f \n\n", base, altura, area);
return 0;
}
