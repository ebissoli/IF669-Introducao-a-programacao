#include <stdio.h>
#include <string.h>
int main(){
<<<<<<< HEAD
    char palavra[1000];int cont, maiusculo=0;
    scanf("%499[^\n]s", palavra);
    for(cont=0;palavra[cont]!='\0';cont++){
        maiusculo=0;
        if(cont==0) maiusculo=1;
        while(palavra[cont]==' ' || palavra[cont]=='.')
            if(palavra[cont++]=='.') maiusculo=1;
        switch (palavra[cont]) {
            case '4':
                palavra[cont]=maiusculo?'A':'a';continue;
            case '5':
                palavra[cont]=maiusculo?'E':'e';continue;
            case '1':
                palavra[cont]=maiusculo?'I':'i';continue;
            case '0':
                palavra[cont]=maiusculo?'O':'o';continue;
            case '2':
                palavra[cont]=maiusculo?'U':'u';continue;
            default:
                if(maiusculo) palavra[cont]=toupper(palavra[cont]);
                continue;
        }
    }
    for(cont=0;palavra[cont]!='\0';cont++) printf("%c", palavra[cont]);
=======
    char palavra[500], maiusculo=1, cont=0;
    scanf("%499[^\n]s", palavra);
    do{
        if(cont!=0) maiusculo=0;
        if(palavra[cont]=='.') maiusculo=1;
        if(cont>0) while(palavra[cont]==' ') cont++; // ignora leitura de espacos
        if(palavra[cont]=='.') maiusculo=1;
        switch (palavra[cont]) {
            case '1':
                palavra[cont] = maiusculo?'I':'i';break;
            case '2':
                palavra[cont] = maiusculo?'U':'u';break;
            case '4':
                palavra[cont] = maiusculo?'A':'a';break;
            case '5':
                palavra[cont] = maiusculo?'E':'e';break;
            case '0':
                palavra[cont] = maiusculo?'O':'o';break;
            default:
                if(maiusculo) palavra[cont]=toupper(palavra[cont]);
                break;
                    }
    }while(palavra[++cont]!='\0');
    for(cont=0;palavra[cont]!='\0';cont++) printf("%c", palavra[cont]);
    return 0;
>>>>>>> 4c99b4efdf2fcd5f21dac5ef8271dcbeb535f0a9
}
