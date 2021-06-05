#include <math.h>
#include <stdio.h>
int main() {
  int A, B, C, D;
  int M;
  scanf("%d\n%d %d %d %d", &M, &A, &B, &C, &D);
  float cbA = (A == 0) ? 0 : (80.0 / A);
  float cbB = (B == 0) ? 0 : (100.0 / B);
  float cbC = (C == 0) ? 0 : (120.0 / C);
  float cbD = (D == 0) ? 0 : (80.0 / D);
  float melhor1 = (cbA + cbB + fabs(cbB - cbA)) / 2;
  float melhor2 = (melhor1 + cbC + fabs(cbC - melhor1)) / 2;
  float melhor3 = (melhor2 + cbD + fabs(cbD - melhor2)) / 2;
  float pior1 = (cbA + cbB - fabs(cbB - cbA)) / 2;
  float pior2 = (melhor1 + cbC - fabs(cbC - melhor1)) / 2;
  float pior3 = (melhor2 + cbD - fabs(cbD - melhor2)) / 2;
  if (M < pior3)
    printf("Acho que vou a pe :(");
  else
    printf("%s",
           fabs(melhor3 - cbA) <= pow(10, -4)
               ? "Verde"
               : (fabs(melhor3 - cbB) <= pow(10, -4)
                      ? "Vermelho"
                      : (fabs(melhor3 - cbC) <= pow(10, -4) ? "Roxo"
                                                            : "Amarelo")));
}
