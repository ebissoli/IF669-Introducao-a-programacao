#include <stdio.h>
#define abs(x, y) (((x - y) < 0) ? y - x : x - y)
int main() {
  int saqueGarrafa, manju, yakitori, pessoas;
  scanf("%d %d %d %d", &saqueGarrafa, &manju, &yakitori, &pessoas);
  int saqueFalta = (15 * saqueGarrafa) - (4 * pessoas);
  int manjuFalta = manju - (5 * pessoas);
  int yakitoriFalta = yakitori - (3 * pessoas);
  int Menor1 = ((saqueFalta + manjuFalta) - abs(manjuFalta, saqueFalta)) / 2;
  int Menor2 = ((Menor1 + yakitoriFalta) - abs(yakitoriFalta, Menor1)) / 2;
  int Maior1 = ((saqueFalta + manjuFalta) + abs(manjuFalta, saqueFalta)) / 2;
  int Maior2 = ((Maior1 + yakitoriFalta) + abs(yakitoriFalta, Maior1)) / 2;
  int Meio = ((saqueFalta + manjuFalta + yakitoriFalta) - Maior2) - Menor2;
  int MeioNegativo = Meio < 0;
  int Maior2Negativo = Maior2 < 0;
  int Menor2Negativo = Menor2 < 0;
  int saqueAparece = (Meio == saqueFalta) || (Menor2 == saqueFalta);
  int manjusAparece = (Meio == manjuFalta) || (Menor2 == manjuFalta);
  switch (MeioNegativo + Maior2Negativo + Menor2Negativo) {
  case 0:
    printf("Partiu Festa do Japa!");
    break;
  case 2:
    printf("Faltaram %d %s e %d %s",
           saqueAparece ? abs(saqueFalta, 0) : abs(manjuFalta, 0),
           saqueAparece ? "saques" : "manjus",
           (!saqueAparece || (yakitoriFalta < manjuFalta))
               ? abs(yakitoriFalta, 0)
               : abs(manjuFalta, 0),
           (!saqueAparece || (yakitoriFalta < manjuFalta)) ? "yakitoris"
                                                           : "manjus");
    break;
  case 1:
    printf("Faltaram %d %s", abs(Menor2, 0),
           Menor2 == manjuFalta
               ? "manjus"
               : (Menor2 == saqueFalta ? "saques" : "yakitoris"));
    break;
  default:
    printf("Partiu Festa do Japa...Japacama");
  }
}
