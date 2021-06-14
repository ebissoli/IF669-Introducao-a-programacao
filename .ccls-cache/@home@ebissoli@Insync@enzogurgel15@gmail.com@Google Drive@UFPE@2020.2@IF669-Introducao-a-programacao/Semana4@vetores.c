#include <stdio.h>
int main() {
  int i, N;
  int somatorio = 0;
  float media;
  while (N < 1 || N > 1000) {
    printf("Qual o valor para N?");
    scanf("%d", &N);
  }
  int v[N];
  for (i = 0; i <= N ; i++) {
    printf("Digite o %do elemento ", i + 1);
    scanf("%d", &v[i]);
    somatorio += v[i];
  }
  media = (somatorio + 0.0) / N;
  for (i = 0; i <= (N - 1); i++)
    if (v[i] == media)
      printf("%do elemento (%d) foi capturado\n", i, v[i]);
  return 0;
}
