#include <stdio.h>
/* Dado uma data de fabricação, dd/mm/aaaa
   o programa fornece uma data de validade no mesmo formato */
int main() {
  int diaFab, mesFab,
      anoFab;     // variáveis referentes ao dia, mês e ano de fabricação
  int diasDesloc; // números de dias que o produto permanece na validade

  printf("Qual a data de fabricação?\n");
  scanf("%d %d %d", &diaFab, &mesFab, &anoFab);
  printf("Qual o tempo de validade (em dias, máximo 20)?\n");
  scanf("%d", &diasDesloc);

  if (diasDesloc > 20 || diasDesloc < 0)
    printf("Número de dias inválido, número inserido ,%d, é %s", &diasDesloc,
           diasDesloc > 20 ? "maior que 20" : "dia inválido");
  int diaTotal = diasDesloc + diaFab;
  // abaixo algumas flags lógicas
  int meioAnoPar =
      (mesFab >= 8) && (mesFab % 2 == 0); // se mês é Ago, Out ou Dez
  int inicioAnoPar =
      (mesFab < 8) && (mesFab % 2 == 0); // se mês é Fev, Abr, Jun
  int mesPar = inicioAnoPar || meioAnoPar;
  int passouAno = (diaTotal > 31) && (mesFab == 12);
  int meioAnoImpar = (mesFab >= 8) && (mesFab % 2 == 1); // se mês é Set, Nov

  switch (mesFab) {
  case 2:
    printf("Data de validade: %d/%d/%d",
           diaTotal % 28 +
               (diaTotal == 28) * 28, // Quando diaTotal = 28 o módulo dá zero,
                                      // aproveitando do pseudotipo booleano de
                                      // C podemos fazer um curto circuito, tal
                                      // que ou 0*28 ou 1*28, ou exclusivo.
           diaTotal > 28 ? ++mesFab : mesFab, anoFab);
    break;
  case 12:
    printf("Data de validade: %d/%d/%d", diaTotal % 31 + (diaTotal == 31) * 31,
           diaTotal > 31 ? 1 : mesFab, passouAno ? ++anoFab : anoFab);
    break;
  default:
    printf("Data de validade: %d/%d/%d",
           mesPar ? diaTotal % (30 + meioAnoPar) +
                        (diaTotal == (30 + meioAnoPar)) *
                            (30 + meioAnoPar) // Superposição dos resultados
                  : diaTotal % (31 - meioAnoImpar) +
                        (diaTotal == (31 - meioAnoImpar)) * (31 - meioAnoImpar),
           mesPar ? (diaTotal > (30 + meioAnoPar) ? ++mesFab : mesFab)
                  : (diaTotal > (31 - meioAnoImpar) ? ++mesFab : mesFab),
           anoFab);
  }
  return 0;
}
