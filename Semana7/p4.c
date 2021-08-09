#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *vet,flag=1;
    while(printf("Digite tamanho do array:\n"),scanf("%d", &n), n>0){ // porque scanf retorna quantos args foram preenchidos, nesse caso sempre 1 o int n.
        if(flag){vet = (int*) malloc(n*sizeof(int));flag=0;}
        else vet = realloc(vet, n*sizeof(int));
        if(vet==NULL) exit(1);
        printf("%p\n", vet);
    }
    free(vet); // não esquecer de devolver a memória
    return 0;
}
