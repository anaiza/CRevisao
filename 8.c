#include <stdio.h>

int main(void) {

  int num[5], i;
  float media, desvio, soma= 0;
  for (i=0;i<5;i++){
    printf("Digite o valor %d", i+1);
    scanf("%d",&num[i]);
    soma += num[i];
  }
  printf ("%f", soma);
  media = soma /5;
  
  return 0;
}