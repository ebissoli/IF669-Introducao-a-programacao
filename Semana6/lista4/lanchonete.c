#include <stdio.h>
struct itens{
    int codigo;
    char desc[50];
    float preco;
};
int main(){
    int cadastrar;char buffer[50]; int cont1=0;int lido, lerItem, lerQtd;int cont2, temp, entrada;float conta=0.0;
    fgets(buffer,50,stdin);sscanf(buffer,"%d", &cadastrar);cadastrar++;struct itens itens[cadastrar-1];temp=cadastrar-1;
    while(--cadastrar){
        fgets(buffer, 50, stdin);sscanf(buffer,"%d", &itens[cont1].codigo);
        fgets(buffer, 50, stdin);sscanf(buffer,"%[^\n]", itens[cont1].desc);
        fgets(buffer, 50, stdin);sscanf(buffer,"%f", &itens[cont1].preco);
        cont1++;
    }
    cont1=0;
    fgets(buffer, 50, stdin);sscanf(buffer,"%d",&lerItem);
    while(lerItem!=0){
        fgets(buffer, 50, stdin);sscanf(buffer,"%d", &lerQtd);
        cont2=0;
        while(itens[cont2].codigo!=lerItem && cont2<=temp)cont2++;
        if(cont2<=temp && lerQtd>=0)conta+=itens[cont2].preco*lerQtd+0.0;
        fgets(buffer, 50, stdin);sscanf(buffer,"%d",&lerItem);
    }
    printf("%.2f", conta);
    return 0;
}
