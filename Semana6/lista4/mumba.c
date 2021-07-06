#include <stdio.h>
#include <math.h>
struct ponto{
    long int px, py, pz, dist;
    int ID;
};
int main(){
    int numCaixas, cont1, cont2, cont3, cont4;scanf("%d",&numCaixas);
    struct ponto ponto, ordemAtual[numCaixas], ordemFinal[numCaixas];int flag=1;
    while(numCaixas){
       ordemAtual[0].px=0;ordemFinal[0].px=0;ordemAtual[0].py=0;ordemFinal[0].py=0;ordemAtual[0].pz=0;ordemFinal[0].pz=0;ordemAtual[0].dist=0;ordemFinal[0].dist=0;ordemFinal[0].ID=-1;flag=0;cont1=-1;
        while(numCaixas) {
            scanf("%ld %ld %ld", &ponto.px, &ponto.py,&ponto.pz); ponto.ID=++cont1;cont2=1;
            if(ponto.ID>0){
            while(pow(ponto.px-ordemFinal[cont2-1].px,2)+pow(ponto.py-ordemFinal[cont2-1].py,2)+pow(ponto.pz-ordemFinal[cont2-1].pz,2)>
                  pow(ordemFinal[cont2].px-ordemFinal[cont2-1].px,2)+pow(ordemFinal[cont2].py-ordemFinal[cont2-1].py,2)+pow(ordemFinal[cont2].pz-ordemFinal[cont2-1].pz,2)
                  && cont2<=cont1) cont2++;cont4=cont2; // compara e ordena as distancias
            ponto.dist = ((ponto.px-ordemFinal[cont2-1].px)*(ponto.px-ordemFinal[cont2-1].px))+((ponto.py-ordemFinal[cont2-1].py)*(ponto.py-ordemFinal[cont2-1].py))
                +((ponto.pz-ordemFinal[cont2-1].pz,2)*(ponto.pz-ordemFinal[cont2-1].pz,2));
            while(((ponto.dist-((ordemFinal[cont2].px-ordemFinal[cont4-1].px)*(ordemFinal[cont2].px-ordemFinal[cont4-1].px))
                    +((ordemFinal[cont2].py-ordemFinal[cont4-1].py)*(ordemFinal[cont2].py-ordemFinal[cont4-1].py))
                    +((ordemFinal[cont2].pz-ordemFinal[cont4-1].pz)*(ordemFinal[cont2].pz-ordemFinal[cont4-1].pz))==0))
             && (cont2<=cont1))cont2++; // para ordenar por ID
            for(cont3=cont2;cont3<=(cont2>cont1?cont2:cont1);cont3++) {if(cont3==cont2)ordemAtual[cont3]=ponto; ordemAtual[cont3+1] = ordemFinal[cont3];}
            for(cont3=cont2;cont3<=(cont2>cont1?cont2:cont1);cont3++) {if(cont3==cont2)ordemFinal[cont3]=ordemAtual[cont3]; ordemFinal[cont3+1] = ordemAtual[cont3+1];}
            }
            else if(ponto.ID==0) {ordemFinal[1]=ponto;ordemFinal[1].dist= sqrt((pow(ponto.px,2)+pow(ponto.py,2)+pow(ponto.pz,2)));}
            numCaixas--;
        }
        for(cont2=0;cont2<=cont1;cont2++){if(cont2>=cont1+1){printf("%d", ordemFinal[cont2+1].ID+1);continue;}printf("%d ", ordemFinal[cont2+1].ID+1);}
        printf("\n");scanf(" %d",&numCaixas);for(cont2=0;cont2<=cont1+1;cont2++) {ordemFinal[cont2].px=ordemAtual[cont2].px=ordemFinal[cont2].py=ordemAtual[cont2].py=ordemFinal[cont2].pz=ordemAtual[cont2].pz=99999999;}
    }
    return 0;
}
