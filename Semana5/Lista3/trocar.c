#include <stdio.h>
int main(){
    char palavra[50];char char1, char2;int contador=0;
    scanf("49[^\n]%c", palavra);
    scanf(" %c",&char1);scanf(" %c", &char2);
    for(;palavra[contador]!='\0';contador++)
        if(palavra[contador]==char1) palavra[contador] = char2;
    printf("%s", palavra);
    return 0;
}
