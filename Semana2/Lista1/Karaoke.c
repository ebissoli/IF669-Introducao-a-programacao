#include <locale.h>
#include <math.h>
#include <stdio.h>
int main() {
  setlocale(LC_ALL, "Portuguese");
  float N, M, T1, V1, T2, V2, T3, V3;
  scanf("%f %f\n%f %f\n%f %f\n%f %f", &N, &M, &T1, &V1, &T2, &V2, &T3, &V3);
  float Ideal = sqrt(N);
  float Vergonha1 = pow(T1, 2) * V1;
  float Vergonha2 = pow(T2, 2) * V2;
  float Vergonha3 = pow(T3, 2) * V3;
  if (Ideal > M)
    printf("Não cantarei, desculpa.");
  else {
    float menorVergonha =
        ((Vergonha1 + Vergonha2) - fabs(Vergonha2 - Vergonha1)) / 2;
    float menorVergonha2 =
        ((Vergonha3 + menorVergonha) - fabs(menorVergonha - Vergonha3)) / 2;
    int num = (menorVergonha2 - Vergonha1) > 0;
    int num2 = (menorVergonha2 - Vergonha2) > 0;
    int num3 = (menorVergonha2 - Vergonha3) > 0;
    printf("Você deve cantar a música %s, boa sorte!",
           num ? "1" : (num2 ? "2" : "3"));
  }
}
