#include <stdio.h>
int main(){
    int num,cont, mostFrequent, frequency, numTemp;
    int actualFrequency = 0;
    frequency = 1;
    scanf("%d",&num);
    mostFrequent = num;
    if(num %2 ==0)
        for(cont=2;cont<=num/2;cont++){
            actualFrequency = 0;
            numTemp = num;
            while(numTemp % cont ==0 && numTemp>0){
                actualFrequency++;
                if( actualFrequency >= frequency && (frequency>=actualFrequency?(cont<=mostFrequent?1:0):1)){
                    frequency = actualFrequency;
                    mostFrequent = cont;
                }
                    numTemp = numTemp/cont;
            }
        }
    else
        for(cont=3;cont<=(num+1)/2;cont+=2){
            actualFrequency = 0;
            numTemp = num;
            while(numTemp  % cont == 0 && numTemp>0){
                actualFrequency++;
                if(actualFrequency >= frequency && (frequency>=actualFrequency?(cont<=mostFrequent?1:0):1)){
                    frequency = actualFrequency;
                    mostFrequent = cont;
                }
                    numTemp = numTemp /cont;
            }
        }
    printf("mostFrequent: %d, frequency: %d",mostFrequent, frequency);
}
