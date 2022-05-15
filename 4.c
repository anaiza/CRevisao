#include <stdio.h>
#include <math.h>

int main (){

  float massa, altura, imc;
  printf("Digite seu peso ");
  scanf("%f", &massa);
  printf("Digite sua altura ");
  scanf("%f", &altura);
  imc = massa/ pow(altura,altura);
  if(imc < 18.5){
     printf("magreza");
  } else if (imc >= 18.5 && imc <= 24.9){
     printf("saudável");
  } else if(imc >=  25 && imc <=29.9){
    printf("sobrepeso");
  } else if(imc >=  30 && imc <=34.9){
    printf("Obesidade grau 1");
  }else if(imc >= 35 && imc <= 39.9){
    printf("Obesidade grau 2");
  }else{
    printf("Obesidade grau 3");
  }
   
  
	return 0;
}