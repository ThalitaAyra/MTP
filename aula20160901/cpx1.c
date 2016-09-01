#include <stdio.h>
#include <complex.h>
int main (){
double complex z1, z2, soma, prod;
double preal, pimag;
printf("Real de z1: ");
scanf("%lf", &preal);
printf("Imag de z1: ");
scanf("%lf", &pimag);
z1 =  preal +pimag * I;
printf("Real de z2: ");
scanf("%lf", &preal);
printf("Imag de z2: ");
scanf("%lf", &pimag);
z2= preal + pimag * I;
soma = z1 + z2; prod = z1 * z2;
printf("Soma :%lf + %lf i\n", creal (soma), cimag (soma));
printf("Soma :%lf /_ %lf rad\n", cabs (soma), carg (soma));
printf("Prod :%lf + %lf i\n", creal (prod), cimag (prod));
printf("Prod :%lf /_%lf rad\n", cabs (prod), carg (prod));
return 0;
}
