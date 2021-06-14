#include <stdio.h>
int main() {
  int i, N;
  N = 0;
  int somatorio = 0;
  float media;
  while (N < 1 || N > 1000) {
    printf("Qual o valor para N? ");
    scanf("%d", &N);
  }
  int v[N];
  for (i = 0; i < N ; i++) {
    printf("Digite o %do elemento ", i + 1);
    scanf("%d", &v[i]);
    somatorio += v[i];
  }
  media = (somatorio + 0.0) / N;
  printf("Media=%.2f\n", media);
  for (i = 0; i < N; i++)
    if (v[i] == media)
      printf("%do elemento (%d) foi capturado\n", i, v[i]);
  return 0;
}
