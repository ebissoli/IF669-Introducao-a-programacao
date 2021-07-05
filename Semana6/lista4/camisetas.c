#include <stdio.h>
#include <string.h>
struct turma{
    char aluno[50], cor[10], tamanho[1];
};
int main(){
    int qtdGente; char buffer[50];int cont1;int cont2, cont3, escolha;
    while(scanf("%d", &escolha),escolha){
    scanf("%d",&qtdGente);qtdGente++; struct turma turma[qtdGente-1];
    struct turma temp[qtdGente-1], final[qtdGente-1];
    while(--qtdGente){
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]",turma[cont1].aluno);
        fgets(buffer, 50, stdin);sscanf(buffer,"%s %[^\n]",turma[cont1].cor, turma[cont1].tamanho); cont2=0;
        while(strcmp(turma[cont1].cor,turma[cont2].cor)>0 && cont2<=cont1) cont2++;
        while(strcmp(turma[cont1].tamanho, turma[cont2].tamanho)>0 && cont2<=cont1>0) cont2++;
        while(strcmp(turma[cont1].aluno,turma[cont2].aluno)>0 && cont2<=cont1) cont2++;
        for(cont3=cont2>cont1?cont2:cont1;cont3<(cont2>cont1?cont2:cont1);cont3++){if(cont3==cont2){ temp[cont2]=turma[cont1];} temp[cont3] = final[cont3];}
        for(cont3=cont2>cont1?cont2:cont1;cont3<(cont2>cont1?cont2:cont1);cont3++){if(cont3==cont2)turma[cont3+1]=temp[cont3]; turma[cont3+1] = temp[cont3+1];}cont1++;
    return 0;
    }
    for(cont2=0;cont2<=cont1;cont2++) printf("%s %s %s\n", turma[cont2].cor,turma[cont2].tamanho,turma[cont2].aluno);
    }
}
