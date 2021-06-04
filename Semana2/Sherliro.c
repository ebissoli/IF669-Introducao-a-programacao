#include <stdio.h>
int main() {
  float totalCoin, prop1, prop2, preco1, preco2, divida;
  scanf("%f\n%f %f\n%f %f\n%f", &totalCoin, &prop1, &prop2, &preco1, &preco2,
        &divida);
  float naveSobra =
      totalCoin - (prop1 * prop2 == 1
                       ? (preco1 >= preco2 ? preco1 * 0.88 + preco2
                                           : preco2 * 0.88 + preco1)
                       : preco1 * prop1 + preco2 * prop2);
  float dividaFalta = naveSobra - divida;
  switch ((naveSobra > 0) + (dividaFalta > 0)) {
  case 2:
    printf("Sherliro livre do Jabbavitz e podendo voar");
    break;
  case 1:
    printf("Sherliro consertou mas ta lascado com o Jabbavitz\n");
    printf("faltam %.2f Napoleocoins", -dividaFalta);
    break;
  default:
    printf("Sherliro vai ser perseguido hoje e ainda ta sem nave\n");
    printf("faltam %.2f Napoleocoins", -(dividaFalta + naveSobra));
  }
}
