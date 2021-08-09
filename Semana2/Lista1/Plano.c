#include <math.h>
#include <stdio.h>
int main() {
  float x, y, theta;
  scanf("%f\n%f", &x, &y);
  if (x == 0 || y == 0)
    if (x == 0 && y == 0)
      printf("Sobre a origem");
    else if (fabs(x) != 0 && y == 0)
      printf("Sobre o eixo x");
    else
      printf("Sobre o eixo y");
  else {
    theta = acos(x / (sqrt(pow(x, 2) + pow(y, 2)))) +
            (((x < 0 && y < 0) * (2 * cos(-x / sqrt(pow(x, 2) + pow(y, 2))))) +
             ((x > 0 && y < 0) * (-2 * cos(x / sqrt(pow(x, 2) + pow(y, 2))))));
    if (0 < theta && theta < (M_PI / 2))
      printf("Primeiro Quadrante");
    else if ((M_PI / 2) < theta && theta < M_PI)
      printf("Segundo Quadrante");
    else if (M_PI < theta && theta < (3 * M_PI / 2))
      printf("Terceiro Quadrante");
    else
      printf("Quarto Quadrante");
  }
}
