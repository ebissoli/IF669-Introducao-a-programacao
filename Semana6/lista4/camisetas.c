#include <stdio.h>
#include <string.h>
struct turma{
    char aluno[50], cor[10], tamanho[10];
};
int main(){
    int qtdGente; char buffer[50];int cont1;int cont2, cont3;char tamanho2[1];int valido;struct turma final[60], temp[60];
    fgets(buffer,49,stdin);sscanf(buffer,"%d",&qtdGente); struct turma turma[qtdGente-1];
    while(qtdGente!=0){
        qtdGente++;;cont1=-0;
        while(--qtdGente){
            fgets(buffer,50,stdin);sscanf(buffer,"%[^\n]",  turma[cont1].aluno);
            fgets(buffer,50,stdin);sscanf(buffer,"%s %[^\n]",turma[cont1].cor,  turma[cont1].tamanho);
            if(cont1>0){
                cont2=1;
                while(strcmp(turma[cont1].cor,final[cont2].cor)>0 && cont2<=cont1)
                    cont2++;
                while(((strncmp(turma[cont1].tamanho,final[cont2].tamanho,1)<0) && !strcmp(turma[cont1].cor,final[cont2].cor) && cont2<=cont1))
                    cont2++;
                while((strncmp(turma[cont1].aluno,final[cont2].aluno,50)>0) && !strcmp(turma[cont1].cor,final[cont2].cor) && !strncmp(turma[cont1].tamanho,final[cont2].tamanho,1) && cont2<=cont1)
                    cont2++;
                if(cont2>cont1) final[cont1+1] = turma[cont1];
                else if(cont2==cont1){final[cont1+1] = final[cont1];final[cont1] = turma[cont1];}
                else{
                    temp[cont2] = turma[cont1];temp[cont2+1] = final[cont2];
                    for(cont3=cont2+1;cont3<=cont1;cont3++) temp[cont3+1] = final[cont3];
                }
                if(cont2<cont1) for(cont3=cont2;cont3<=cont1+1;cont3++) final[cont3] = temp[cont3];
            }
            else if(cont1==0){final[1]=turma[0];}
            cont1++;
            }
        for(cont3=1;cont3<=cont1;cont3++){printf("%s %s %s\n", final[cont3].cor, final[cont3].tamanho, final[cont3].aluno);}
        scanf("%d%*c", &qtdGente);if(qtdGente!=0) printf("\n");
        }
    return 0;
}
