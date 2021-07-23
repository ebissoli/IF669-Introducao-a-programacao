#include <stdio.h>
int main(){
    int maior, menor, cont1=0,indexMaior, num,indexMenor, solicita;; // precisamos armazenar outro '\n'
    scanf("%d", &solicita);
    do{
    cont1=0;scanf("%d", &num);int numeros[num];scanf("%d", &numeros[0]);
    indexMaior=indexMenor=0;// indice do menor numero
    while(++cont1<num){
        scanf(" %d", &numeros[cont1]);
        if(numeros[cont1]>numeros[indexMaior])indexMaior=cont1;
        if(numeros[cont1]<numeros[indexMenor])indexMenor=cont1;
    }
    int tamanho = cont1-1, valido =1, sentido; //tamanho do numeros, se e sequencia crescente e se e horario=0 ou antihorario=1
        if(indexMenor-1==indexMaior && tamanho!=1){
            indexMenor--;sentido = 0; while(++indexMenor<tamanho && valido) if(numeros[indexMenor] >numeros[indexMenor+1]) valido =0;
            if(numeros[tamanho]>numeros[0]) valido=0;
            indexMenor=-1;
            while(++indexMenor<=indexMaior-1 && valido) if(numeros[indexMenor] >numeros[indexMenor+1]) valido =0;
        }
        else if(indexMenor+1==indexMaior && tamanho!=1){
            sentido = 1; while(--indexMenor>=0 && valido) if(numeros[indexMenor] <numeros[indexMenor+1])valido =0;indexMenor=tamanho;
            if(numeros[0]>numeros[tamanho]) valido =0;
            while(--indexMenor>indexMaior && valido){ if(numeros[indexMenor] >numeros[indexMenor+1]) valido =0;}
        }
        else if(indexMenor==0){
            indexMenor--;sentido = 0; while(++indexMenor<tamanho && valido) if(numeros[indexMenor]>numeros[indexMenor+1])
                                                                 valido =0;
        }
        else if(indexMenor==tamanho){
            indexMenor++;sentido = 1; while(--indexMenor>0 && valido) if(numeros[indexMenor]>numeros[indexMenor-1]) valido =0;
        }
        else valido=0;
        printf("%s\n", valido?(sentido?"SIM, ANTI-HORARIO":"SIM, HORARIO"):"NAO");
    }while(--solicita);
}
