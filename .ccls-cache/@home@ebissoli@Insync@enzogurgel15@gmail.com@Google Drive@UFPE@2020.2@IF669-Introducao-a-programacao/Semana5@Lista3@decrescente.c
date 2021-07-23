#include <stdio.h>
int main(){
    int Indexmaior;int tamanho, tamanhoTemp,cont1=0,cont2=0, contTemp, qtd, flag=1, indexMaiorTemp,size;
    scanf("%d", &qtd);
    do{
        scanf("%d", &size);int array[size];
        Indexmaior=indexMaiorTemp=cont1=tamanho=tamanhoTemp=0;flag=1;
        do{
            scanf(" %d", &array[cont1]);
            if(array[cont1]>=array[indexMaiorTemp] || array[cont1]>=array[cont1-1]){
            tamanhoTemp=0;flag=0;indexMaiorTemp=cont1;
            }
            if(flag) tamanho++;
            else tamanhoTemp++;
            if(tamanhoTemp>tamanho) {
                tamanho=tamanhoTemp;tamanhoTemp=0;
                Indexmaior =indexMaiorTemp;
                flag=1;
            }
            cont1++;
        }while(--size);
    if(tamanho==1) printf("0\n");
    else{
        printf("%d\n", tamanho);
        for(cont1=Indexmaior;cont1<(Indexmaior+tamanho);cont1++) printf("%d ",array[cont1]);
        printf("\n");
    }
    }while(--qtd);
    return 0;
}
