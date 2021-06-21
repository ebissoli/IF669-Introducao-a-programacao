#include <stdio.h>
#define pow(x) (x * x)
int main() {
  int numEscaneado = 1, k, l = 1, num1, num2;
  while (numEscaneado) {
    scanf("%d", &numEscaneado);
    k = (numEscaneado - 1) / 2;
    if (!k) {numEscaneado=0;continue;}
    num1=k+1,num2=k;
    while((pow(num1)-pow(num2))!=2*k+1){
       k+= pow(num1) -pow(num2)>2*k+1?-1:1;
    }
    printf("%d - %d", pow(num1), pow(num2));
  }
}
