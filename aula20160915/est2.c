#include <stdio.h>
#include <math.h>

typedef struct
    {
        float x;
        float y;
        float z;
    } ponto;
    float distancia( ponto a, ponto b)
    {
       float dx, dy, dz;

       dx = a.x - b.x;
       dy = a.y - b.y;
       dz = a.z - b.z;
       return sqrt( dx*dx + dy*dy + dz*dz );
    }

   int main()
    {
      ponto p1, p2;
      float d;

      printf("Introduz as coordenadas x, y e z do ponto p1: ");
      scanf("%f %f %f", &p1.x, &p1.y, &p1.z );
      printf("Introduz as coordenadas x, y e z do ponto p2: ");
      scanf("%f %f %f", &p2.x, &p2.y, &p2.z );
    d = distancia( p1, p2);
      printf("A distancia entre os pontos e %f\n", d );
      return 0;
    }
