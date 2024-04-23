#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 501
#define MAX 5

main(){
  int c, l, l1, c1, m[MAX][MAX], cont;
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    for(c = 0; c < MAX; c++){
      do{
        m[l][c] = rand() % ALE;
        cont = 0;
        for(l1 = 0; l1 <= l; l1++){
          if(l == l1){
            for(c1 = 0; c1 < c; c1++){
              if(m[l][c] == m[l1][c1]){
                cont++;
              }
            }
          }
          else{
            for(c1 = 0; c1 < MAX; c1++){
              if(m[l][c] == m[l1][c1]){
                cont++;
              }
            }
          }
        }
      }while(cont != 0);
    }
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
     if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  getchar();
}