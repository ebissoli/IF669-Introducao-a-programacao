#include <stdio.h>
#include <string.h>
int main(){
    char palavra[50];int cont2=0, cont3=0,valido=1;
    scanf("%49[^\n]s", palavra); int len = strlen(palavra)-1;
    while(palavra[cont2]!='\0' && valido){
        // cont1-3 conta do final e cont2 checa se e simetrico no caso aa e aaa ou aba etc
        if(palavra[cont2]!=palavra[len-cont3]) valido=0;
        cont2++;cont3++;
    }
    printf("%s", valido?"palìndromo":"não é palíndromo");
    return 0;
}
