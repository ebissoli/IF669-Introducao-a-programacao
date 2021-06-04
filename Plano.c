#include <math.h>
#include <stdio.h>
int main() {
  float x, y, theta, raio;
  scanf("%f\n%f", &x, &y);
  if (((y < 0) && (x == 0)) || ((y > 0) && (x == 0)))
    printf(" Sobre o eixo y");
  else if (((x < 0) && (y == 0)) || ((x > 0) && (y == 0)))
    printf(" Sobre o eixo x");
  else if ((x == 0) && (y == 0))
    printf("Sobre a origem");
  else {
    theta = acos(x / (fabs(x) * fabs(y)));
    printf(
        "%s Quadrante",
        (0 < theta < M_PI / 2)
            ? "Primeiro"
            : ((M_PI / 2 < theta < M_PI)
                   ? "Segundo"
                   : ((M_PI < theta < 3 * M_PI / 2) ? "Terceiro" : "Quarto")));
  }
}
