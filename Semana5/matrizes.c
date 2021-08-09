#include <stdio.h>
#include <string.h>

int main(){
    int num;
    /* char nome[] = "Alexandre Mota\n"; */
    /* char nome[4] = { 'M', 'o', 't', 'a', '\0'}; */
    char nome[40];
    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);
    scanf("%s", nome);
    printf("%s\n", nome);
    printf("Nome: %s\n", nome);
    if(nome[i] !=  '.') i++;
    char nome[i];
    /* int i; */
    /* for(i=0; nome[i] != '\0'; i++) */
    /*     printf("%c", nome[i]); */
    /* int vet[10]; */
    /* int mat[10][10]; */
    return 0;

}
