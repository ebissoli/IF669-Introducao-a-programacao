#include <stdio.h>
int main(){
    int qntAndares, limitePassageiros, solicitacoes, i=0;
    int numAndar[100], qntPassageiros[100], contPassageiro=0;
    int contAndares=0;
    //ler andares e limite de passageiros
    scanf ("%d %d", &qntAndares, &limitePassageiros);
    scanf ("%d", &solicitacoes);
    int aux=0;
    aux = solicitacoes;
    while (solicitacoes!=0){
        scanf ("%d %d", &numAndar[i], &qntPassageiros[i]);
        contPassageiro+=qntPassageiros[i];
        for (int j=i ; j<=numAndar[i]-1; j++){
            if (contPassageiro==limitePassageiros){
                contPassageiro=0;
                if(solicitacoes==1){
                    contAndares+=1 + numAndar[i];
                    //printf ("== lim contou %d andares\n", contAndares);
                    break;
                }
                else{
                    contAndares+=1+numAndar[i] *2;
                    //printf (" == lim contou %d andares\n", contAndares);
                }
            }
            else if (contPassageiro>limitePassageiros){
                contPassageiro=contPassageiro-limitePassageiros;
                contAndares+=1 +numAndar[i]*2;
                //printf (">lim contou %d andares\n", contAndares);
            }
            else{
                if(solicitacoes==1){
                    contAndares+=2 + numAndar[i];
                    //printf ("< lim 1 contou %d andares\n", contAndares);
                    break;
                }
                else{
                    contPassageiro=contPassageiro;
                    contAndares+=1;
                    //printf ("< lim 0 contou %d andares\n", contAndares);
                }
            //contAndares+=numAndar[i]+1;
            }
        }
        //Um n�mero que represente a quantidade de andares percorridos pelo elevador para executar sua fun��o.
        solicitacoes--;
        i++;
        //printf ("%d\n", contAndares);
    }
    printf ("%d\n", contAndares);
    return 0;
}
