#include <stdio.h>
int main(){
    int andaresMax, eCapacidade,  andar, cont1, cont2, cont3, maiorAndar, eCapacidadeArmazenador, andarAtual, quantidadeAndar, numSolicita;
    scanf("%d %d\n", &andaresMax, &eCapacidade);scanf("%d", &numSolicita);
    int pessoasAndar[eCapacidade],andarAtivado[andaresMax];
    for(cont1=0;cont1<andaresMax+1;cont1++) andarAtivado[cont1]=0; // significa que nao deve parar em nehum andar, note que ele considera o terreo como andar valido;
    maiorAndar=cont2=cont3=0;
    while(numSolicita){
        scanf("%d", &andar);scanf(" %d", &pessoasAndar[andar]);
        andarAtivado[andar]=1;
        maiorAndar = andar>maiorAndar?andar:maiorAndar;
        numSolicita--;
    }
    int andares[maiorAndar+1]; // /lista de andares que pecorreremos
    for(cont1=0;cont1<maiorAndar+1;cont1++) if(andarAtivado[cont1]==1) andares[cont2++] = cont1;
    andarAtual=andares[cont3++];
    int andaresPecorridos=0;eCapacidadeArmazenador=eCapacidade;
    while(pessoasAndar[maiorAndar]>=0 && andarAtual!=0 && maiorAndar!=0){
        quantidadeAndar=pessoasAndar[andarAtual];
        pessoasAndar[andarAtual]-=quantidadeAndar>=eCapacidade?eCapacidade:quantidadeAndar; // coloca gente no elevador
        eCapacidade-=pessoasAndar[andarAtual]==0?quantidadeAndar:eCapacidade; // diminui a capacidade estabelecida
        if(pessoasAndar[maiorAndar]==0) {andarAtual=0; andaresPecorridos+=2*maiorAndar;continue;} // pode descer para o terreo
        andarAtual= eCapacidade>0?andares[cont3++]:andarAtual;
        if(eCapacidade<=0){andaresPecorridos+=2*andarAtual;eCapacidade=eCapacidadeArmazenador;}
    }
    printf("%d", andaresPecorridos);
    return 0;
}
