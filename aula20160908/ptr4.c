#include <stdio.h>
#include <stdlib.h>
int main ()
{
float num1, num2, soma;
printf("Digite um numero:\n ");
scanf("%f", &num1);
printf("Digite outro numero:\n ");
scanf("%f,", &num2);
soma= num1+num2;
printf("A soma dos dois numeros e:%p %f\n",&soma,soma);
  return 0;
}


