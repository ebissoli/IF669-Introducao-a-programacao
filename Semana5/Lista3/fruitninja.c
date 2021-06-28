#include <stdio.h>
#include <math.h>
int main(){
    int  i, j;char sentido, temp, cont, cont2;
    scanf("%c %d %d", &sentido, &i, &j); // pega sentido do corte e dimensao de Mat
    int mat[i][j];
    int linhaDivide=i%2==0?i/2:ceil(i/2.0); // vai inverter a partir dessa linha/coluna, depende do tipo de corte
    int colunaDivide=j%2==0?j/2:ceil(j/2.0);
    if(sentido=='H')
    for(cont=0;cont<i;cont++) for(cont2=0;cont2<j;cont2++){
            if(cont<linhaDivide){ scanf("%d", &mat[cont][cont2]);continue;}
            scanf("%d", &mat[cont][j-(cont2+1)]);
        }
    else if(sentido == 'V')
    for(cont=0;cont<i;cont++) for(cont2=0;cont2<j;cont2++){
            if(cont2<colunaDivide){scanf("%d", &mat[cont][cont2]);continue;}
            scanf("%d", &mat[i-(cont+1)][cont2]);
        }
    for(cont=0;cont<i;cont++)
        for(cont2=0;cont2<j;cont2++){
            printf("%02d ", mat[cont][cont2]); if(cont2+1<j);if(cont2+1==j) printf("\n");
        }
    return 0;
}
