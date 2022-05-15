#include <stdio.h>

int main (){
    int i, j;
    float vlrPremio, resultado[3],aposta[3];
  	for(i=0;i<3;i++){
  		printf("Digite a aposta %d R$: ", i+1);
          scanf("%f", &aposta[i]);
  	}
    printf("Informe o valor do prêmio:");
    scanf("%f", &vlrPremio);

    for (j = 0; j < 3; j++)
    {
        resultado[j] = (vlrPremio / 10 ) * aposta[j];
        printf("Jogador %d receberá R$: %.1f\n", j+1, resultado[j]);
    }
    
	return 0;
}