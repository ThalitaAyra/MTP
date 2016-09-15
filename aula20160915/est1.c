#include <stdio.h>
#include <math.h>

#define RECEBE(c,p) ({ \
    printf ("Entre com coordenadas x do ponto %s: ", c); \
    scanf ("%f", &p.x); \
    printf ("Entre com coordenadas y do ponto %s: ", c); \
    scanf ("%f", &p.y); })
#define MOSTRA(p) \
    ({ printf ("( %g; %g) \n", p.x, p.y); })
#define SOMA(a,b,s) \
    ({s.x = a.x + b.x; \
    s.y = a.y + b.y; })
#define DISTANCIA(a,b) \
    ({ sqrt (pow(a.x-b.x, 2.0) + pow (a.y-b.y,2.0)); })

struct Ponto {
float x;
float y;
};
int main (){
struct Ponto a, b, s;
float distancia;
RECEBE("a",a); RECEBE("b", b);
SOMA(a,b,s);
MOSTRA(s);
distancia = DISTANCIA(a,b);
printf("A distancia entre eles: %g\n", distancia);
return 0;
}
