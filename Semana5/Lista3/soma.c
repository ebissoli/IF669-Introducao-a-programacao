#include <stdio.h>
#include <math.h>
int main(){
    long int num1, temp3, temp1, cont1, soma=0;int qTd, num[100], zeros[100];
    scanf("%d", &qTd);temp3=qTd;
    do{
        cont1=0;
        scanf("%ld", &num1);temp1=num1;
        while(temp1%10 ==0) {cont1++;temp1/=10;}
        int numInt1=temp1%10+ temp1/10%10*10 + temp1/10/10%10*100 + temp1/10/10/10%10*1000 + temp1/10/10/10/10%10*10000 + temp1/10/10/10/10/10%10*100000;
        num[qTd] = numInt1;zeros[qTd] = cont1;

    }while(--qTd);
    printf("%d", soma);
    return 0;
}
