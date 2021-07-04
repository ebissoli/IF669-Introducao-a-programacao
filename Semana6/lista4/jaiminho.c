#include <stdio.h>
#include <string.h>
int const totalCadastros = 8251;
#define numRuas 5;
int main(){
    struct cadastro{
        char nome[50], sexo, dataNascimento[10], Rua[5];
        int eCasa, numCasa, numPredio, andar, ap, ordenamento;
    };
    int N, cadastroAtual=0, cont1, cont2, cont3, cont4, cont5, casa, predio, andar, ap, cadastrosValidos, ordenou;
    struct cadastro cadastro[totalCadastros], validos[totalCadastros], ordenacao[totalCadastros];
    char queTipoResidencia[10], morador[50], Rua[5], sexo, nascimento[10];char buffer[1];
    while(scanf("%d%%*c", &N)!=3){
        if(N==1){ // Cadastro
            scanf(" %[^\n]%*c", cadastro[cadastroAtual].Rua);
            fgets(queTipoResidencia, 10, stdin);
            if(queTipoResidencia[0]=='c') {
                cadastro[cadastroAtual].eCasa=1;
                sscanf(queTipoResidencia,"%c %d%*c",&queTipoResidencia[0],&cadastro[cadastroAtual].numCasa);
            }
            else{
                cadastro[cadastroAtual].eCasa=0;
                sscanf(queTipoResidencia,"%c %d %d %d%*c", &queTipoResidencia[0], &cadastro[cadastroAtual].numPredio, &cadastro[cadastroAtual].andar, &cadastro[cadastroAtual].ap);
            }
                scanf(" %[^\n]%*c", cadastro[cadastroAtual].nome);strcpy(Rua,cadastro[cadastroAtual].Rua);
                scanf("%c%*c", &cadastro[cadastroAtual].sexo);scanf("%[^\n]", cadastro[cadastroAtual].dataNascimento);strcpy(cadastro[cadastroAtual].Rua,Rua);
                cadastro[cadastroAtual].ordenamento=cadastroAtual++;
            }
        else { // acesso
            cont1=-1;cadastrosValidos=0;cont2=-1;ordenou=1;
            scanf("%[^\n]s, %[^\n]s", morador, Rua); // vai procurar o cadastrado
            while(strcmp(morador, cadastro[++cont1].nome) && strcmp(Rua,cadastro[cont1].Rua) || cont1<=cadastroAtual){
                if(cont2++>0){
                    cont3=cont2;cont4=0;
                    if(cadastro[cadastroAtual].eCasa){
                        while(cadastro[cont1].numCasa>=cadastro[cont3].numCasa*(cadastro[cont3++].eCasa)); // se for eCasa, tautologia, note que ordenou e 1 nessa linha
                        while(cadastro[cont1].numCasa==cadastro[cont3].numCasa && ordenou) if(cadastro[cont1++].ordenamento>=cadastro[cont3++].ordenamento) ordenou=0;
                    }
                    else{
                        while(cadastro[cont1].numPredio>=cadastro[cont3].numPredio*(!cadastro[cont3++].eCasa)); // se for eCasa, tautologia, note que ele passa pelo "pipe" de ordenamentos
                        while(cadastro[cont1].numPredio==cadastro[cont3].numPredio && ordenou) if(cadastro[cont1].andar>=cadastro[cont3++].andar) ordenou=0; ordenou=1;
                        while(cadastro[cont1].andar==cadastro[cont3].andar && ordenou) if(cadastro[cont1].ap>=cadastro[cont3++].ap) ordenou=0; ordenou=1;
                        while(cadastro[cont1].ap==cadastro[cont3].ap && ordenou) if(cadastro[cont1++].ordenamento>=cadastro[cont3++].ordenamento) ordenou=0; ordenou=1;
                    }
                    validos[cont3] = cadastro[cont1]; // cadastro e ordenado como deve no vetor final
                    for(cont4=cont3+1;cont4<=cont2;cont4++) ordenacao[cont4]=validos[cont4]; // preenche array a partir de index modificado+1, shift dos elementos
                    for(cont5=cont3;cont5<=cont4;cont5++) validos[cont3]=ordenacao[cont4];cadastrosValidos++;continue; // coloca no array final o ordenamento
                }
                validos[cont2] = cadastro[cont1]; cadastrosValidos++; // so deve ser executado quando cont2==0;
            }
            cont3 = cont2 + 1; // hack para nao incrementar no final
            if(cadastrosValidos==0) printf("Sem dados de %s em %s\n", morador, Rua);
            else{
                printf("Foram encontradas %d instancais de pessoas chamadas %s em %s\n", cont3, morador, Rua);
                while(--cont3){
                    sexo = validos[cont3].sexo;strcpy(nascimento, validos[cont3].dataNascimento);
                    if(validos[cont3].eCasa) printf("Casa:%s|Sexo:%s|Nascimento:%s\n", casa, sexo, nascimento);
                    else{
                        predio = validos[cont3].numPredio;andar = validos[cont3].andar;ap = validos[cont3].ap;
                        printf("Edificio:%s|Andar:%s|Numero do apt:%s|Sexo:%s|Nascimento: %s\n", predio, andar, ap, sexo, nascimento);
                    }
                }
            }
        }
    }
    printf("O programa sera fechado, obrigado por fazer uso dele. Lembre-se de evitar a fadiga!");
    return 0;
}
