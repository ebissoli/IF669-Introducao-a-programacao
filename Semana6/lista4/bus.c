#include <stdio.h>
struct passageiros{
    int idade, passagem, poltrona;
    char nome[50], de[50], para[50], hora[5], data[10];
};
int main(){
    int entrada, cont1=0, cont2=0, soma=0;
    char buffer[50];
    float media=0.0;
    struct passageiros viagem[45];fgets(buffer, 50, stdin);sscanf(buffer,"%d",&viagem[0].passagem);
    while(viagem[cont1].passagem!=-1){ // consertar formatacao
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]",viagem[cont1].data);
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]",viagem[cont1].de);
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]",viagem[cont1].para);
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]",viagem[cont1].hora);
        fgets(buffer, 50, stdin);sscanf(buffer,"%d",&viagem[cont1].poltrona);
        fgets(buffer, 50, stdin);sscanf(buffer,"%d",&viagem[cont1].idade);
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]",viagem[cont1].nome);
        soma+=viagem[cont1].idade;
        cont1++;fgets(buffer, 50, stdin);sscanf(buffer,"%d",&viagem[cont1].passagem);
    }
    media=(float) soma/(cont1);
        for(cont2=0;cont2<=cont1;cont2++)
            if(viagem[cont2].poltrona%2==0 && viagem[cont2].idade>media) printf("%s\n", viagem[cont2].nome); // tambem nao printa
    return 0;
}
