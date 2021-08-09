#include <stdio.h>
#include <math.h>
int main(){
    int letraTemp,dotTemp, var, var2;
    char letra;
    scanf("%c", &letra);
    letraTemp = 0;
    while((letraTemp % 65) <= ((int) letra % 65)){
        var = 65;
        for(dotTemp=1;dotTemp<=(floor(((2*((int) letra % 65)) + 1)/2.0));dotTemp++){
            printf("%c",(floor((2*((int) letra % 65) + 1)/2.0) - letraTemp)<dotTemp?(char) var++:'.');
        }
        printf("%c", (char) letraTemp+65);
        var2 = (letraTemp + 65);
        for(dotTemp=1;dotTemp<(floor((2*(int) letra % 65) + 1)/2.0);dotTemp++){
            printf("%c",((letraTemp+1)>dotTemp?(char) var2 -1:'.'));
            var2--;
        }
        letraTemp++;
        printf("\n");
    }
}
