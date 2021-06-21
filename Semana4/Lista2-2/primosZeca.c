#include <stdio.h>
int main(){
    int limiteInferior, limiteSuperior, menorPrimo, primoMeio, maiorPrimo;
    int contador, ePrimo=1, flag=1, naoSaiu=1;float mediaAritmetica;int numZeca;
    scanf("%d %d", &limiteInferior, &limiteSuperior);
    menorPrimo=limiteInferior%2==0?limiteInferior-1:limiteInferior;
    while(ePrimo){
        if(limiteInferior==4) {ePrimo=0;menorPrimo=3;continue;}
        if(limiteInferior==3) {ePrimo=0;menorPrimo=2;continue;}
        if(limiteInferior==5) {ePrimo=0;menorPrimo=3;continue;}
        for(contador=2;contador<=(menorPrimo+1)/2;contador++)
            if(menorPrimo%contador==0)contador=menorPrimo-1;
        if(flag) contador=menorPrimo;
    if(!(contador==menorPrimo))
        if(ePrimo) {ePrimo=0;continue;}
    flag=0;
    menorPrimo-=2;
    }
    flag=1;
    maiorPrimo = menorPrimo==2?3:menorPrimo+2;ePrimo=1;
    do{
    while(ePrimo){
        for(contador=2;contador<=(maiorPrimo+1)/2;contador++){
            if(menorPrimo==2) {contador=4;continue;}
            if(maiorPrimo%contador==0)contador=maiorPrimo-1;
        }
        if(!(contador==maiorPrimo)){
            if(ePrimo && flag){ //so exectua uma vez
            primoMeio=maiorPrimo;
            maiorPrimo+=2;
            while(ePrimo){
                for(contador=2;contador<=(maiorPrimo+1)/2;contador++)
                    if(maiorPrimo%contador==0)contador=maiorPrimo-1;
                if(!(contador==maiorPrimo))
                    if(ePrimo) {ePrimo=0;continue;}
                maiorPrimo+=2;
            }
            }
            ePrimo=0;continue;
        }
        maiorPrimo+=2;
    }
    flag=0;
    ePrimo=1;
    mediaAritmetica=(menorPrimo + maiorPrimo)/2.0;
    if(mediaAritmetica>=limiteInferior && mediaAritmetica<=limiteSuperior){
        if(mediaAritmetica==primoMeio) numZeca++;}
    else if(mediaAritmetica<limiteInferior);
    else naoSaiu=0;
    menorPrimo=primoMeio;primoMeio=maiorPrimo;maiorPrimo+=2;
    }while(naoSaiu);
    printf("%d", numZeca);
}
