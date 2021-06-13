#include <stdio.h>
int main(){
    int dia1, dia2, mes1, mes2, ano1, ano2, diasFaltam, bissexto;
    int mes1Temp = 1;int flag;
    scanf("%d%*c%d%*c%d\n%d%*c%d%*c%d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);
    diasFaltam = 0;
    flag = 1;
    while(ano1<ano2) {
        bissexto = ((ano1%4==0 && ano1%100==0) || ano1%400==0)?1:0;
        diasFaltam+=365+bissexto;
        ano1++;
    }
    bissexto = ((ano1%4==0 && ano1%100==0) || ano1%400==0)?1:0;
    if(mes1>mes2){
        diasFaltam-=(365+bissexto);
        mes1Temp = mes1;
        while(mes1Temp<=12){
            diasFaltam+= (((28+bissexto)*(mes1Temp==2) + (mes1Temp<8 && mes1Temp%2==0?30:31)*(mes1Temp<8 && (mes1Temp!=2)) + (mes1Temp>=8 && mes1Temp%2==0?31:30)*(mes1Temp>=8)) - dia1*(flag==1?1:0));
            mes1Temp++;}
        mes1Temp=1;
        while(mes1Temp<mes2){
            diasFaltam+=((28+bissexto)*(mes1Temp==2) + (mes1Temp%2==0 && mes1Temp<8?30:31)*(mes1Temp<8 && mes1Temp!=2) + (mes1Temp%2==0 && mes1Temp>=8?31:30)*(mes1Temp>=8));
            mes1Temp++;
        }
    }
    while(mes1 <mes2){
     diasFaltam+= ((28+bissexto)*(mes1==2) + (mes1<8 && mes1%2==0?30:31)*(mes1<8 && mes1Temp!=2) + (mes1>=8 && mes1%2==0?31:30)*(mes1>=8)) - dia1*(flag==1?1:0);
     mes1++;
    }
    diasFaltam+= dia2 - dia1;
    printf("%d",diasFaltam);
}
