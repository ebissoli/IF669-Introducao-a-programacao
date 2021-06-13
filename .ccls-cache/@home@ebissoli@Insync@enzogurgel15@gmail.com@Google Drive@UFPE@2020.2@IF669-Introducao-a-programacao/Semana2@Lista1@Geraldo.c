#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  double money, x, y, a, b, c, d, p1, p2, c1, c2;
  scanf("%lf\n%lf %lf %lf %lf %lf %lf\n%lf %lf\n%lf %lf", &money, &x, &y, &a,
        &b, &c, &d, &c1, &p1, &c2, &p2);
  double custo1 =
      2.0 * ((1.0 / 12) * c1 * sqrt(pow((x - a), 2) + pow((y - b), 2))) + p1;
  double custo2 =
      2.0 * ((1.0 / 12) * c2 * sqrt(pow((x - c), 2) + pow((y - d), 2))) + p2;
  double maisBarata = (custo1 + custo2 - fabs(custo2 - custo1)) / 2;
  double maisCara = (custo1 + custo2 + fabs(custo2 - custo1)) / 2;
  int vaiConseguir = (money > maisBarata) + ((money - maisBarata) > maisCara);
  switch (vaiConseguir) {
  case 1:
    printf("%s", fabs(maisBarata - maisCara) < pow(10, -6) ? "Tanto faz..."
                 : fabs(maisBarata - custo1) < pow(10, -6)
                     ? "Ele vai para o destino 1"
                     : "Ele vai para o destino 2");
    break;
  case 2:
    printf("Ele vai visitar os dois lugares");
    break;
  default:
    printf("Ele vai ficar em casa\n");
  }
  if (vaiConseguir == 0)
    printf("-1");
  else
    printf("\n%0.2lf",
           vaiConseguir == 1 ? maisBarata : (maisBarata + maisCara));
}
