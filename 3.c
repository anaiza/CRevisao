#include <stdio.h>
#include <math.h>

int main (){
  int binario[4], i, aux=3;
  int resultado;
  for(i=0;i<4;i++){
    printf("Digite o %do. bit: ", i+1);
    scanf("%d", &binario[i]);
  
  } 
    for(i=0;i<4;i++){
      resultado +=  binario[i] * pow(2,aux);
        aux--;
  } 
  printf("resultado %d", resultado);
  
	return 0;
}