#include <stdio.h>
#include <string.h>
int main(){
    int numTestes, tamanho, indiceMaior[1], maiorDecrescente[1], array[100], cont1, troca=0, flag=1;
    scanf("%d", &numTestes);
    do{
        scanf("%d", &tamanho);cont1=0;tamanho-=1;
        indiceMaior[0]=scanf("%d", &array[0]);maiorDecrescente[0]=maiorDecrescente[1]=0;
        do{
            scanf("%d", &array[++cont1]);
            if(array[cont1]>=array[indiceMaior[troca?1:0]]){
                // filtrar os arrays
        }while(--tamanho);
        printf("%d\n", maiorDecrescente[0]>maiorDecrescente[1]?maiorDecrescente[0]+1:maiorDecrescente[1]+1);
        if(maiorDecrescente[0]>maiorDecrescente[1]) flag=0;
        for(cont1=0;cont1<maiorDecrescente[flag?1:0]+1;cont1++)
            printf("%d ", array[indiceMaior[flag?1:0]+cont1]);
    }while(--numTestes);
    return 0;
}
