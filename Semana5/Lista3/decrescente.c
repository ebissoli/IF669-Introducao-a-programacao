#include <stdio.h>

int main(){
    int maior;int tamanho,contador=0,contador2, contadorTemp;
    scanf("%d", &tamanho);int array[tamanho];int arrayTemp[tamanho];
    scanf("%d", &array[0]);
    maior = array[0];
    while(contador++<tamanho && tamanho!=1){
        scanf(" %d", &array[contador]);
        for(contador2=0;contador2<=contador;contador2++) // testa se elemento e igual e preenche uma parte que muda
            if(array[contador2]==array[contador] || array[contador]>array[0]){
                arrayTemp[contador2]=array[contador];
                contadorTemp=contador2;
                for(;contador2<=contador;contador2++)
                    arrayTemp[contador2+1]=array[contador2];
                for(contador2=contadorTemp;contador2<=contador;contador2++)
                    array[contador2]=arrayTemp[contador2];
            }
    }
    printf("[");
    for(contador=0;contador<tamanho;contador++) printf(" %d ",array[contador]);
    printf("]");
    return 0;
}
