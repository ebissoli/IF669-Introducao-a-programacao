#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char numero[100];char recorte[7], zeros[100], somaString[120];
    int cont1, eNegativo, tamanho, ultimaUnidade, qTd;long long int soma;
    for(cont1=0;numero[cont1]!='\0';cont1++) numero[cont1]='0';
    scanf("%d", &qTd);soma=0;
    do{
         for(cont1=0;recorte[cont1]!='\0';cont1++) recorte[cont1] = '\0';
        scanf(" %s", numero);eNegativo=(numero[0]=='-');//assumimos que ele tem pelo menos um digito.
        for(cont1=eNegativo?1:0;numero[cont1]!='\0' && cont1<=6;cont1++) ultimaUnidade=cont1;
        strncpy(recorte,numero, eNegativo? ultimaUnidade: ultimaUnidade-1);
        if(eNegativo)
            for(cont1=1;recorte[cont1]!='\0';cont1++){
                soma-=pow(10,strlen(recorte)-cont1-1)*((int) recorte[cont1]-'0');
            }
        else for(cont1=0;recorte[cont1]!='\0';cont1++)
                 soma+=pow(10,strlen(recorte)-cont1-1)*((int) recorte[cont1]-'0');
    }while(--qTd);
    tamanho=strlen(numero)-ultimaUnidade; // tamanho do zero-padding
    printf("%lld", soma); for(cont1=0;cont1<=tamanho;cont1++) printf("0");
}
