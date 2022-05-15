#include <stdio.h>
#include <math.h>

int main (){
  printf("Digite o tamanho do triangulo (linhas): ");
  int tamanho;
  scanf("%d", &tamanho);
  int num= 0;
  for(int i = 1; i<= tamanho;i++){
    for(int j = 1; j<= i; j++){
      num++;
      printf("%d ", num);
   
    }
    printf("\n");
  }
  
 
  
	return 0;
}