#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int casaLaranja, casaBanana, casaOvos, casaLeite, stop;
  int compraLaranja = 0;
  int compraBanana = 0;
  int compraOvos = 0;
  int compraLeite = 0;
  stop = 0;
  scanf("%d %d %d %d", &casaLaranja, &casaBanana, &casaLeite, &casaOvos);
  if (casaLaranja < 0 || casaBanana < 0 || casaLeite < 0 || casaOvos < 0) {
    printf("lurn maf :(");
    stop = 1;
  } else if (casaLaranja <= 0 && stop == 0) {
    compraLaranja = pow(casaBanana, 2);
    compraBanana += 2;
  }
  if ((compraBanana + casaBanana) > casaOvos && stop == 0) {
    compraOvos = compraLaranja - casaOvos;
    if (compraOvos > 0) {
      compraLeite = (2 - casaLeite) <= 0 ? 0 : (2 - casaLeite);
      printf("%d %s\n%d %s\n%d %s\n%d %s", compraLaranja, "laranjas",
             compraBanana, "bananas", compraOvos, "ovos", compraLeite,
             "ml de leite");
    }
  } else if (stop == 0 && compraOvos <= 0) {
    compraLeite = 500;
    printf("%d %s\n%d %s\n%d %s\n%d %s", compraLaranja, "laranjas",
           compraBanana, "bananas", compraOvos, "ovos", compraLeite,
           "ml de leite");
  }
}
