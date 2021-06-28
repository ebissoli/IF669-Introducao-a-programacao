#include <stdio.h>
int main(){
    int zAndares, zAndar, nSolicitacoes, nPessoas, eCapacidade, andarPecorrido=0;
    scanf("%d %d %d\n", &zAndares, &eCapacidade, &nSolicitacoes);
    while(nSolicitacoes-- && nSolicitacoes!=0){ // lidar com caso que nSoliciticoes e 1, alem disso faz uso da ordem de execucao das operacoes, esq->dir
        scanf("%d %d", &zAndar, &nPessoas);
        andarPecorrido+= 2*zAndar*((nPessoas/eCapacidade) + (!(!(nPessoas%eCapacidade)))); // !(!(exp)) transforma inteiro nao nulo em 1
    }
    printf("andares pecorridos %d", andarPecorrido);
    return 0;
}
