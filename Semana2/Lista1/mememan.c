#include <math.h>
#include <stdio.h>
int main() {
  int casaLaranja, casaBanana, casaOvos, casaLeite;
  int compraLaranja = 0;
  int compraBanana = 0;
  int compraOvos = 0;
  int compraLeite = 0;
  scanf("%d %d %d %d", &casaLaranja, &casaBanana, &casaOvos, &casaLeite);
  if (casaLaranja < 0 || casaBanana < 0 || casaLeite < 0 || casaOvos < 0)
    printf("lurn maf :(");
  else {
    if (casaLaranja == 0 && casaBanana > 0) {
      compraLaranja = pow(casaBanana, 2);
      compraBanana += 2;
    }
    if ((compraBanana + casaBanana) > casaOvos) {
      compraOvos = compraLaranja <= casaOvos ? 0 : compraLaranja - casaOvos;
      compraLeite = 2000 <= casaLeite ? 0 : (2000 - casaLeite);
    }
    printf("%d %s\n%d %s\n%d %s\n%d %s", compraLaranja, "laranjas",
           compraBanana, "bananas", compraOvos, "ovos",
           compraOvos == 0 ? 500 : compraLeite, "mL de leite");
  }
}
