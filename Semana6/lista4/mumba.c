#include <stdio.h>
#include <math.h>
struct ponto{
    long int px, py, pz;
    int ID, evalido;
};
int main(){
    int numCaixas, cont1, cont2, cont3, cont4, cont5, cont6;scanf("%d%*c",&numCaixas);
    struct ponto ponto[numCaixas+1],guardar, guardar_previo, temp;int flag=1, flag2;int visitou=0;long int th, distancia,contarDaqui;
    ponto[0].px=0;ponto[0].py=0;ponto[0].pz=0;cont1=1;
    while(numCaixas!=0){
            while(numCaixas){
                scanf("%ld %ld %ld", &ponto[cont1].px, &ponto[cont1].py,&ponto[cont1].pz);
                ponto[cont1].ID=cont1;ponto[cont1].evalido=1;
                numCaixas--;cont1++;
            }
        cont2=-1;contarDaqui=0;
        while(++cont2<cont1-1){
            cont3=0;th=9999999999;
            while((++cont3)<cont1){
                distancia = ((ponto[cont3].px-ponto[contarDaqui].px)*(ponto[cont3].px-ponto[contarDaqui].px))+
                   ((ponto[cont3].py-ponto[contarDaqui].py)*(ponto[cont3].py-ponto[contarDaqui].py))+
                    ((ponto[cont3].pz-ponto[contarDaqui].pz)*(ponto[cont3].pz-ponto[contarDaqui].pz));
                if(distancia<=th && ponto[cont3].evalido){
                    if((ponto[cont3].ID<guardar.ID && ponto[cont3].ID!=guardar_previo.ID) && th==distancia){guardar=ponto[cont3];}
                    else if(th !=distancia) guardar=ponto[cont3];
                    th=(((ponto[cont3].px-ponto[contarDaqui].px)*(ponto[cont3].px-ponto[contarDaqui].px))+
                   ((ponto[cont3].py-ponto[contarDaqui].py)*(ponto[cont3].py-ponto[contarDaqui].py))+
                    ((ponto[cont3].pz-ponto[contarDaqui].pz)*(ponto[cont3].pz-ponto[contarDaqui].pz)));
                }
            }
            contarDaqui=guardar.ID;
            ponto[guardar.ID].evalido=0;
            if(cont2==cont1-2){printf("%d",ponto[guardar.ID].ID);continue;}
            printf("%d ",ponto[guardar.ID].ID);
            guardar_previo.ID=guardar.ID;
        }
        for(cont3=0;cont3<=cont1-1;cont3++) ponto[cont3].px=ponto[cont3].py=ponto[cont3].pz=ponto[cont3].evalido=0;
        printf("\n");
        guardar.ID=0;
        cont1=1;
        scanf("%d%*c", &numCaixas);
    }
    return 0;
}
