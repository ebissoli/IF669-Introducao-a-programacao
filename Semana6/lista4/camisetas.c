#include <stdio.h>
#include <string.h>
struct turma{
    char aluno[50], cor[10], tamanho[10];
};
int main(){
    int qtdGente; char buffer[50];int cont1;int cont2, cont3, cont4,cont6;char tamanho2[1];int valido;struct turma final[60], temp;int mod=0;int cont5=0;
    fgets(buffer,49,stdin);sscanf(buffer,"%d",&qtdGente);int flag;
    while(qtdGente!=0){
        qtdGente++;;cont1=0;mod=0; struct turma turma[qtdGente];
        while(--qtdGente){
            scanf("%[^\n]%*c", turma[cont1].aluno);
            scanf("%s %[^\n]%*c", turma[cont1].cor, turma[cont1].tamanho);
            cont1++;
            }
        for(flag=1;flag<=6;flag++){
                cont4=mod-1;cont6=cont4+1;
                while(cont4++<=cont1-1){
                    valido=0;
                    if(flag==1) if(!strcmp(turma[cont4].cor,"branco") && !strcmp(turma[cont4].tamanho,"P")) valido=1;
                    if(flag==2) if(!strcmp(turma[cont4].cor,"branco") && !strcmp(turma[cont4].tamanho,"M")) valido=1;
                    if(flag==3) if(!strcmp(turma[cont4].cor,"branco") && !strcmp(turma[cont4].tamanho,"G")) valido=1;
                    if(flag==4) if(!strcmp(turma[cont4].cor,"vermelho") && !strcmp(turma[cont4].tamanho,"P")) valido=1;
                    if(flag==5) if(!strcmp(turma[cont4].cor,"vermelho") && !strcmp(turma[cont4].tamanho,"M")) valido=1;
                    if(flag==6) if(!strcmp(turma[cont4].cor,"vermelho") && !strcmp(turma[cont4].tamanho,"G")) valido=1;
                    if(valido) {temp=turma[mod];turma[mod] = turma[cont4];turma[cont4] = temp;mod++;}
                    if(mod>1 && valido)
                        for(cont5=cont6;cont5<=mod-1;cont5++){
                            if(strncmp(turma[mod-1].aluno,turma[cont5].aluno,50)<0){temp=turma[cont5];turma[cont5] = turma[mod-1];turma[mod-1] = temp;}
                        }
            }
        }
                    for(cont3=0;cont3<cont1;cont3++) printf("%s %s %s\n", turma[cont3].cor, turma[cont3].tamanho, turma[cont3].aluno);
        printf("\n");
        scanf("%d%*c",&qtdGente);
    }
    return 0;
}
