#include <stdio.h>
#include <math.h>

int main (){
 float x,y, distancia;
  printf("Entre com a coordenada x: ");
  scanf("%f", &x);
  printf("Entre com a coordenada x: ");
  scanf("%f", &y);
  distancia = sqrt(((0 - x) * (0 - x) )+ ( (0-y) * (0-y)));
  printf("A distância entre os dois pontos (%.0f,%.0f) e (0,0) eh %.1f",x,y, distancia );

  
	return 0;
}