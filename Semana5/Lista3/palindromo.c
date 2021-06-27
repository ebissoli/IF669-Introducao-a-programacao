#include <stdio.h>
int main(){
    char palavra[50];int cont1 = 0, cont2=0, cont3=1,valido=1;
    scanf("%c", palavra[cont1]);
    while(palavra[cont1++]!='\n') // para pegar tamanho sem string.h
        scanf("%c", palavra[cont1]);
    palavra[cont1-1]='\0';cont1-=1; // porque referencia index nao na memoria
    while(palavra[cont2]!='\0' && valido){
        // cont1-3 conta do final e cont2 checa se e simetrico
        if(palavra[cont2]!=palavra[cont1-cont3]) valido=0;
        cont2++;cont3++;
    }
    printf("%s", valido?"palìndromo":"não é palíndromo");
    return 0;
}
