#include <stdio.h>
// calcula o horário no formato hh:mm dado um deslocamento em minutos
int main() {
  int hh, mm, mDesloc;
  printf("Digite o número de horas: ");
  scanf(" %i", &hh);
  printf("Digite o número de minutos: ");
  scanf(" %i", &mm);
  printf("Digite o número de minutos deslocados: ");
  scanf(" %i", &mDesloc);
  int mTotal = mDesloc + mm;
  int mFinal = mTotal % 60;
  int hFinal = (hh + (mTotal / 60)) % 24;
  printf("%i%i:%i%ih", hFinal / 10, hFinal % 10, mFinal / 10, mFinal % 10);
}
