#include <stdio.h>
int main(){
    int vet[5] = {1,2,3,4,5}, *pvet=vet, i;
    printf("%p, %p\n", &vet, pvet); // a)
    for(i=0;i<5;i++) printf("%d", pvet[i]);printf("\n"); // b)
    for(i=0;i<5;i++) printf("%d", *(pvet + i));printf("\n"); // c)
    for(i=0;i<5;i++) printf("%d", vet[i]);printf("\n"); // d)
    for(i=0;i<5;i++) printf("%d", *(vet + i));printf("\n"); // e)
    return 0;
}
