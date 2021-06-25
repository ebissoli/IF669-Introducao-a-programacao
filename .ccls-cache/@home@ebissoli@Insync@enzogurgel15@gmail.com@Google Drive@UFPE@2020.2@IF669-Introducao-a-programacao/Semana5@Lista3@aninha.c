#include <stdio.h>

int main(){
    int tamanho, valido =1;int i = 1;
    scanf("%d", &tamanho);int array[tamanho];
    scanf("%d",&array[0]); // para ter um elemento basico
    while(valido && i++<tamanho){
        scanf("%d", &array[i]);
        if(array[i]>array[i-1] && array[i]>array[0])
            if(i+1<tamanho){
                scanf("%d", &array[i+1]);
                valido = array[i+1]<array[i]?0:1;
            }
            else valido=0;
        // se passar no ultimo teste quer dizer que ainda falta preencher array;
    }
    if(valido) printf("sim, %s", array[i-1]>array[0]?"antihorario":"horario");
    else printf("NAO");
    // array[i-1] e o ultimo elemento do array, note que array[i] extrapola o tamanho do array
    return 0;
}
