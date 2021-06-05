#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  double money, x, y, a, b, c, d, p1, p2, c1, c2;
  scanf("%lf\n%lf %lf %lf %lf %lf %lf\n%lf %lf\n%lf %lf", &money, &x, &y, &a,
        &b, &c, &d, &p1, &p2, &c1, &c2);
  float custo1 =
      2 * ((1.0 / 12) * c1 * sqrt(pow((x - a), 2) + pow((y - b), 2))) + p1;
  float custo2 =
      2 * ((1.0 / 12) * c2 * sqrt(pow((x - c), 2) + pow((y - d), 2))) + p2;
  float maisBarata = (custo1 + custo2 - fabs(custo2 - custo1)) / 2;
  float maisCara = (custo1 + custo2 + fabs(custo2 - custo1)) / 2;
  int vaiConseguir = (money > maisBarata) + ((money - maisBarata) > maisCara);
  switch (vaiConseguir) {
  case 1:
    printf("%s", fabs(maisBarata - maisCara) < pow(10, -4)
                     ? "Tanto faz..."
                     : (fabs(maisBarata - custo1) < pow(10, -4)
                            ? "Ele vai para o destino 1"
                            : "Ele vai para o destino 2"));
    break;
  case 2:
    printf("Ele vai visitar os dois lugares");
    break;
  default:
    printf("Ele vai ficar em casa");
  }
  printf("\n%.2lf",
         vaiConseguir == 0
             ? -1
             : (vaiConseguir == 1 ? maisBarata : (maisBarata + maisCara)));
}
