#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char numero[100];char recorte[6];char excluido[]="-", unidades[8]=['1','2','3','4','5','6','7','8','9'], zeros[100], somaString[12];
    int cont1,soma, eNegativo, tamanho, ultimaUnidade, qTd;
    scanf("%d", &qTd);
    do{
        scanf(" %s", numero);soma=0;eNegativo=numero[0]=='-';//assumimos que ele tem pelo menos um digito.
        for(cont1=eNegativo?1:0;cont1!='\0' && cont1<=5;cont1++) ultimaUnidade=cont1;
        strncpy(recorte,numero, eNegativo? ultimaUnidade: ultimaUnidade-1); // copia uma substring so com os digitos desejados
        for(cont1=0;recorte[cont1]!='\0';cont1++) soma+=pow(10,cont1)*((int)recorte[cont1]-'0')*(eNegativo?-1:1); // soma os digitos da substring
    }while(--qTd);
    tamanho=strlen(numero)-ultimaUnidade; // tamanho do zero-padding
    for(cont1=0;cont1<tamanho;cont1++) zeros[cont1]='0'; // zero-filling do vetor de zeros
    printf("%s", strncat(sprintf(somaString, "%d", soma),zeros,tamanho)); // add o zero-padding
}
