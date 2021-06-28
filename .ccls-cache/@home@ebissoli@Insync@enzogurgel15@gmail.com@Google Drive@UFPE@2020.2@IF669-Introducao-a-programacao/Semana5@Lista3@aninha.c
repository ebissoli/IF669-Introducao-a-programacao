#include <stdio.h>
int main(){
    int tamanho, valido =1;int i = 0;
    scanf("%d", &tamanho);int array[tamanho];
    scanf("%d",&array[0]); // para ter um elemento basico
    while(valido && i++<tamanho){
        if (!(i==tamanho)) scanf("%d", &array[i]);
        if(array[i]>array[i-1] && array[i]>array[0])
            if(i+1<tamanho){
                scanf("%d", &array[i+1]);
                valido = array[i+1]<array[i]?0:1;
            }
            else valido=0;
        // se passar no ultimo teste quer dizer que ainda falta preencher array;
    }
    if(valido) printf("sim, %s\n", array[i-2]>array[0]?"horario":"antihorario");
    else printf("NAO\n");
    // array[i-2] e o ultimo elemento do array, note que array[i] extrapola o tamanho do array, por 2 index
    return 0;
}
