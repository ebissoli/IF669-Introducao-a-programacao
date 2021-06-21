#include <stdio.h>
int main(){
    int termos, cont2, k=0;double somaAtual=0.0;int passou1, passou2;
    int primo1, primo2;
    scanf("%d", &termos);
    while(termos){
        k++;passou1=1;passou2=1;
        primo1=2*k+1;primo2=2*k+3;
            for(cont2=3;cont2<=((2*k+1)+1)/2;cont2++)
                if((2*k+1)%cont2==0) {passou1=0;cont2=2*k+1;}
            if(passou1) for(cont2=3;cont2<=((2*k+3)+1)/2;cont2++)
                            if((2*k+3)%cont2==0) {passou2=0;cont2=2*k+3;}
            if(passou1 && passou2){somaAtual+=(1.0/(2*k+1) + 1.0/(2*k+3));termos--;}
        }
    printf("%.10f", somaAtual);
}
