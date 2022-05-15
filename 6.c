#include stdio.h

int main(void) {

  int i, x;
  long fat[10] = {1,1,1,1,1,1,1,1,1,1};
  for (x= 0;x10;x++){
    for(i = 1; i = x; i++)
    {
      fat[x] = i; 
    }
    printf(n%d!  %lu, x+1, fat[x]);
  }
  
  return 0;
}