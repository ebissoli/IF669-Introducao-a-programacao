#include <stdio.h>
int main() {
  int scoreA = 0;
  int scoreB = 0;
  int rounds, cartaA, cartaB;
  int somaAtualA, somaAtualB, divA, divB, cont;
  scanf("%d", &rounds);
  scoreA = scoreB = 0;
  while (rounds > 0 ? rounds-- : 0) {
    scanf("%d %d", &cartaA, &cartaB);
    somaAtualA = somaAtualB = 0;
    divA = divB = 1; // pegar o valor do numero em si
    while (cartaA >= 1 || cartaB >= 1) {
      if (cartaA > 0) {
        somaAtualA += (cartaA % 10);
        cartaA =
            (cartaA % 10) == 0
                ? cartaA / 10
                : cartaA -
                      (cartaA %
                       10); // pega as digitos se passar no teste ele pega 0
      }
      if (cartaB > 0) {
        somaAtualB += (cartaB % 10);
        cartaB = (cartaB % 10) == 0 ? cartaB / 10 : cartaB - (cartaB % 10);
      }
    }
    for (cont = 1; cont <= somaAtualA; cont++)
      divA += (somaAtualA % cont == 0 && cont > 1) ? 1 : 0;
    for (cont = 1; cont <= somaAtualB; cont++)
      divB += (somaAtualB % cont == 0 && cont > 1) ? 1 : 0;
    if (somaAtualA == 0)
      scoreA++;
    if (somaAtualB == 0)
      scoreB++;
    divA % 2 == 0 ? scoreA++ : scoreA;
    divB % 2 == 0 ? scoreB++ : scoreB;
  }
  divA = divB = 1;
  somaAtualA = somaAtualB = 0;
  cartaA = scoreA;
  cartaB = scoreB;
  while (cartaA >= 1 || cartaB >= 1) {
    if (cartaA > 0) {
      somaAtualA += (cartaA % 10);
      cartaA = (cartaA % 10) == 0 ? cartaA / 10 : cartaA - (cartaA % 10);
    }
    if (cartaB > 0) {
      somaAtualB += (cartaB % 10);
      cartaB = (cartaB % 10) == 0 ? cartaB / 10 : cartaB - (cartaB % 10);
    }
  }
  for (cont = 1; cont <= somaAtualA; cont++)
    divA += (somaAtualA % cont == 0 && cont > 1) ? 1 : 0;
  for (cont = 1; cont <= somaAtualB; cont++)
    divB += (somaAtualB % cont == 0 && cont > 1) ? 1 : 0;
  scoreA = (somaAtualA == 2)
               ? scoreA - 4
               : ((divA == 2 && somaAtualA % 2 == 1) ? scoreA + 3 : scoreA);
  scoreB = (somaAtualB == 2)
               ? scoreB - 4
               : ((divB == 2 && somaAtualB % 2 == 1) ? scoreB + 3 : scoreB);
  printf("Quem ganhou foi aquele time.\n%d",
         (scoreA - scoreB) == 0
             ? 1
             : (scoreA > scoreB ? scoreA - scoreB : scoreB - scoreA));
}
// hotel de Hillbert
