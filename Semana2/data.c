#include <stdio.h>
#include <stdlib.h>
int main() {
  float totalCoin, preco1, preco2, divida;
  int prop1, prop2;
  scanf("%f\n%d %d\n%f %f\n%f", &totalCoin, &prop1, &prop2, &preco1, &preco2,
        &divida);
  float naveSobra =
      totalCoin -
      ((prop1 * prop2) == 1
           ? (preco1 > preco2 ? preco1 * 0.88 + preco2 : preco2 * 0.88 + preco1)
           : preco1 * prop1 + preco2 * prop2);
  float dividaFalta = naveSobra - divida;
  switch ((naveSobra >= 0) + (dividaFalta >= 0)) {
  case 2:
    printf("Sherliro livre do Jabbavitz e podendo voar");
    break;
  case 1:
    printf("Sherliro consertou mas ta lascado com o Jabbavitz\n");
    printf("faltam %.2f Napoleocoins",
           naveSobra < 0 ? fabs(naveSobra) : fabs(dividaFalta));
    break;
  default:
    printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\n");
    printf("faltam %.2f Napoleocoins",
           fabs(dividaFalta + naveSobra +
                fabs(totalCoin < 0 ? fabs(totalCoin) : 0)));
  }
}
