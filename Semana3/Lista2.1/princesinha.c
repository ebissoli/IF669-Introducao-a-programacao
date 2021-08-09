#include <stdio.h>
int main(){
  int numDragoes, multk, multi, multm, multn, cont;
  int dragoesBulinados=0;
  scanf("%d\n%d\n%d\n%d\n%d", &multk, &multi, &multm, &multn, &numDragoes);
  for(cont=1;cont<=numDragoes;cont++)
    dragoesBulinados+=((cont % multk ==0) || (cont % multi ==0) || (cont % multm ==0) || (cont % multn == 0));
  printf("%d",dragoesBulinados);
}
