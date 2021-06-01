#include <stdio.h>
/* Dado uma data de fabricação, dd/mm/aaaa
   o programa fornece uma data de validade no mesmo formato */
int main() {

  int diaFab, mesFab, anoFab;
  // variáveis referentes ao dia, mês e ano de fabricação, análogo na linha de
  // baixo para validade.
  int diaVal, mesVal, anoVal;
  int diasDesloc;
  // números de dias que o produto permanece na validade

  printf("Qual a data de fabricação?\n");
  scanf("%d %d %d", &diaFab, &mesFab, &anoFab);
  printf("Qual o tempo de validade (em dias, máximo 120)?\n");
  scanf("%d", &diasDesloc);
  if (diasDesloc > 120 || diasDesloc <= 0)
    printf("Número de dias inválido, número inserido ,%d, é %s", &diasDesloc,
           diasDesloc > 120 ?: "maior que 120"
           : "menor que 1");
  else {
    if ()
  }
  return 0
}
