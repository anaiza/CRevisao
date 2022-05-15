#include <stdio.h>

int main(void) {

  int i, x;
  long fat[5] = {1,1,1,1,1};
  for (x= 0;x<5;x++){
    for(i = 10; i <= 15; i++)
    {
      fat[x] *= i; 
    }
    printf("\n%d!:  %lu", x+11, fat[x]);
  }
  
  return 0;
}