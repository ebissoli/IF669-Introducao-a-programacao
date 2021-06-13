#include <stdio.h>

int main(){
   int scoreA=0;int scoreB=0;int rounds, cartaA, cartaB;
   int somaA = 0;int somaB= 0;int desempateA = 0;int desempateB = 0;
   int somaAtualA=0;int somaAtualB=0;
   scanf("%d", &rounds);
   while(rounds--){
       scanf("%d %d", &cartaA, &cartaB);
       desempateA+=cartaA;desempateB+=cartaB;
       somaAtualA=0;somaAtualB=0;
       while((cartaA/10)!=0){
          cartaA = (cartaA%10)==0?cartaA/10:cartaA-cartaA%10;
          somaAtualA +=(cartaA%10);
       }
       while(somaAtualA){

       }

       while((cartaB/10)!=0){
          cartaB = (cartaB%10)==0?cartaB/10:cartaB-cartaB%10;
          somaAtualB +=(cartaB%10);
       }
       somaAtualA%2==0?scoreA++:scoreA;
       somaAtualB%2==0?scoreB++:scoreB;

   }
}
hotel de Hillbert
