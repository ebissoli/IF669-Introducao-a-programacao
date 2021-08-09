#include <stdio.h>
int main() {
  int dia1, dia2, mes1, mes2, ano1, ano2, diasFaltam, bissexto;
  int mes1Temp = 1;
  int flag;
  scanf("%d%*c%d%*c%d\n%d%*c%d%*c%d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);
  diasFaltam = 0;
  mes1Temp = mes1;
  if (ano1 < ano2) { // compensar shift inicial, comeca em ano diferente
    bissexto = (ano1 % 4 == 0 && ano1 % 100 != 0) ||
               ano1 % 400 == 0; // checar se ano1 é bissexto
    while (mes1Temp <= 12) {    // compensar ano que comeca
      diasFaltam +=
          ((28 + bissexto) * (mes1Temp == 2) +
           (mes1Temp % 2 == 0 && mes1Temp < 8 ? 30 : 31) *
               (mes1Temp < 8 && mes1Temp != 2) +
           (mes1Temp % 2 == 0 && mes1Temp >= 8 ? 31 : 30) * (mes1Temp >= 8)) -
          dia1;
      dia1 = 0;
      mes1Temp++; // sai como 1
    }
    ano1++;               // passou para o proximo ano com shift compensado
    while (ano1 < ano2) { // add anos seguintes
      bissexto = (ano1 % 4 == 0 && ano1 % 100 != 0) || ano1 % 400 == 0;
      diasFaltam += 365 + bissexto;
      ano1++;
    }
    mes1Temp = 1;
    bissexto = (ano1 % 4 == 0 && ano1 % 100 != 0) ||
               ano1 % 400 == 0; // checar se ano1 é bissexto
    while (mes1Temp < mes2) {   // estamos no ano1=ano2
      diasFaltam +=
          ((28 + bissexto) * (mes1Temp == 2) +
           (mes1Temp % 2 == 0 && mes1Temp < 8 ? 30 : 31) *
               (mes1Temp < 8 && mes1Temp != 2) +
           (mes1Temp % 2 == 0 && mes1Temp >= 8 ? 31 : 30) * (mes1Temp >= 8));
      mes1Temp++;
    }
    diasFaltam += dia2; // shift de mes
  } else {
    bissexto = (ano1 % 4 == 0 && ano1 % 100 != 0) || ano1 % 400 == 0;
    while (mes1Temp < mes2) { // comeca no mesmo ano, mas mes diferente
      diasFaltam +=
          ((28 + bissexto) * (mes1Temp == 2) +
           (mes1Temp % 2 == 0 && mes1Temp < 8 ? 30 : 31) *
               (mes1Temp < 8 && mes1Temp != 2) +
           (mes1Temp % 2 == 0 && mes1Temp >= 8 ? 31 : 30) * (mes1Temp >= 8)) -
          dia1;
      dia1 = 0;
      mes1Temp++;
    }
    diasFaltam +=
        dia2 - dia1; // se mesmo ano e mes, note que para os outros casos dia1=0
  }
  printf("%d", diasFaltam);
}
