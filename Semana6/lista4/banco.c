#include <stdio.h>
struct dados{
    int idade, amigos, fotos;
    char nome[50], sexo, civil;
};
int main(){
    int users, cont1=0, cont2;
    char buffer[50];
    scanf("%d%*c", &users);
    struct dados dado[users];
    while(users){
        fgets(buffer,50,stdin);sscanf(buffer,"%d",&dado[cont1].idade);
        fgets(buffer,50,stdin);sscanf(buffer,"%[^\n]",dado[cont1].nome);
        fgets(buffer,50,stdin);sscanf(buffer,"%c",&dado[cont1].sexo);
        fgets(buffer,50,stdin);sscanf(buffer,"%c",&dado[cont1].civil);
        fgets(buffer,50,stdin);sscanf(buffer,"%d",&dado[cont1].amigos);
        fgets(buffer,50,stdin);sscanf(buffer,"%d",&dado[cont1].fotos);cont1++;users--;
    }
    for(cont2=0;cont2<cont1;cont2++){
        printf("Idade: %d\n", dado[cont2].idade);
        printf("Nome: %s\n", dado[cont2].nome);
        printf("Sexo: %c\n", dado[cont2].sexo);
        printf("Estado Civil: %c\n", dado[cont2].civil);
        printf("Numero de amigos: %d\n", dado[cont2].amigos);
        printf("Numero de fotos: %d\n", dado[cont2].fotos);
        printf("\n\n")
    }
    return 0;
}
