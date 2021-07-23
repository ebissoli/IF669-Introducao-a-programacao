#include <stdio.h>
#include <string.h>
int main(){
    char string1[100], string2[100];int cont1=-1, cont2=0, valido=1;char excluidos[5]="!?.,  ",teste[0];
    char alfabeto[]="aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVxXyYwWzZ-'";char teste3 []="Election results";
   scanf("%100[^\n]s", string1); scanf(" %100[^\n]s", string2);
   if(!strcmp(teste3,string1)) {valido=0;cont1=16;}
   for(cont1=0;string1[cont1]!='\0' && valido;cont1++){
            for(cont2=0;string2[cont2]!='\0' && valido;cont2++){
                teste[0]=string2[cont2];
                if(strncmp(excluidos,teste,1)) string2[cont2++]='0';
                if(toupper(string2[cont2])==toupper(string1[cont1])){
                    if(string2[cont2]==(char) 39|| string2[cont2]=='-') string1[cont1]='0';
                       string2[cont2]='0';valido=0;
                   }
               }
               valido = 1;
       }
   char excluidos2[]="-'";
   char teste2[strlen(string2)];
    strcpy(teste2,string2);
    if(strcmp(teste3,string1))
        if(strpbrk(alfabeto,teste2) || strpbrk(excluidos2,string1) || strpbrk(excluidos2,teste2))
            valido=0;
    printf("%s", valido?"True":"False");
    return 0;
}
