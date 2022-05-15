#include <stdio.h>

int main()
{
    char nome[20];
    printf("Digite um nome: ");
    scanf("%[^\n]", nome);
    
   for (int i = 0; nome[i] != '\0'; i++){
       if(nome[i]>96){
           nome[i] -= 32;  
       }
     
   } 
    printf("O nome digitado é: %s", nome);
    return 0;
}
