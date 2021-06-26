#include <stdio.h>
int main(){
    char string1[50], string2[50];int contador=0, contador2=0, valido=1;
   scanf("%49[^\n]s", string1); scanf(" %49[^\n]s", string2);
    while(string1[contador2]!=0 && valido){
        valido=1;
        for(contador=0;string1[contador]!='\0' && valido;contador++)
            if(string1[contador2]==string2[contador]){
                string2[contador]='0'; contador2++;valido=0;}
        if (!valido){valido=1;continue;}
        valido= 0;
    }
    printf("%s", valido?"sim":"nao");
    return 0;
}
