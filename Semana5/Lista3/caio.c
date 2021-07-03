#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    // i = count; and = andar; limite, quant. de solicitação, pessoas solicitação; andar da sol.; quant. de pessoas.
    int i, and, lim, qsol, psol[1000], asol[1000], qpess, count_andares, flag;
    qpess = 0;
    count_andares = 0;
    flag = 0;
    scanf("%d %d\n%d", &and, &lim, &qsol);

    printf("%d - %d - %d\n\n", and, lim, qsol);

    //printf("x");

    for(i = 0; i < qsol; i++){

        //printf("y");

        scanf("%d %d", &psol[i], &asol[i]);
    }

    //printf("%i", psol[1]);
    //for(i = 0; i <= qsol; i++){
    //    printf("%d %d\n", psol[i], asol[i]);
    //}

    //printf("-%d-", psol);


    for(i = 0; i <= qsol; i++){

        //printf("-%d-", psol[i]);

        if(psol[i] >= (lim - qpess)){ // se pessoas no andar > vagas no elevador;

            //printf("%i", psol[i]);
            //printf("if\n");

            psol[i] -= psol[i]>=(lim -qpess)?(lim -qpess):psol[i];

            //printf(" psol = %d\n ", psol[i]);

            count_andares += (asol[i] * 2);

            qpess = 0;

            i= psol[i]>0?i:i--;

            //printf("%i, z", psol[i]);

        }else{

            qpess += psol[i];
            if(flag) i--;flag=0;
            flag=1;

            //printf("else\n");

            //printf("%i, z", psol[i]);
        }
        //printf("%d\n", count_andares);
    }

    //printf("y%dy", asol);
    //count_andares += asol[i];

    printf("%d", count_andares);

    return 0;
}
