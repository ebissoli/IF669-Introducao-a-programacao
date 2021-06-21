#include <stdio.h>
int main() {
  int sinal, ePrimo=1, eChave=0, cont,cont2,testouPrimo=1,
       ordemCrescente = 1, indexTeste, tentativas=3;
  int sinalTemp, flag=0;double somaAtual=0.0;int somaAtualCeil;
  while (tentativas--){
      scanf("%d", &sinal);
      if(flag) {printf("SINAL OFF\n"); continue;}
      somaAtual=0.0;ePrimo=1;ordemCrescente=1; // reseta teste de chave e primalidade do numero
      for(cont=2;cont<=(sinal%2==0?sinal/2:(sinal+1)/2);cont++){
          if(sinal==3) {cont=sinal;continue;}
          if(sinal%cont==0){
              ePrimo=0;
              sinalTemp=sinal;
            testouPrimo=1;
              while(sinalTemp%cont==0){
                  if(testouPrimo)
                      for(cont2=(cont==2)?3:2;cont2<=((cont+1)/2);cont2++){ // testa se primo
                          if(cont==3) {cont2=4;continue;}
                          if(cont%cont2==0) cont2=cont-1;
                      }
                  if(!(cont2==cont)){
                      somaAtual+= (cont+0.0)/(ordemCrescente*1.0);
                      ordemCrescente++;
                      sinalTemp=sinalTemp/cont;testouPrimo=0;continue;
                  }
                  sinalTemp=1; // garantido nao ser primo
              }
          }
      }
      if(ePrimo) {somaAtual+=sinal;flag=1;printf("SHERLIRO SALVOU MULITTLE\n");continue;} // caso que sinal ja e primo
      somaAtualCeil = ((int) somaAtual)==somaAtual?(int)somaAtual:(int)somaAtual+1; //ceil manual :)
      if(somaAtualCeil==3) cont=4;
      for(cont=2;cont<=(somaAtualCeil%2==0?somaAtualCeil/2:(somaAtualCeil+1)/2);cont++){
          if(somaAtualCeil==3) {cont=4;continue;}
          if(somaAtualCeil%cont==0) cont=somaAtualCeil-1;
      }
      if(!(cont==somaAtualCeil)) {eChave=1;flag=1;}
    printf("%s\n", eChave?"SHERLIRO SALVOU MULITTLE":"ERRO");
    }
}
