#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int t, n;
    scanf("%d", &t);

    while(t--) {
        scanf(" %d", &n);
        int vet[n], seq[n];

        for(int i = 0; i < n; ++i) {
            scanf(" %d", &vet[i]);
        }

        int size_seq = 0;
        int temp[n];
        for(int i = 0; i < n - 1; ++i) {
            temp[0] = vet[i];
            int size_temp = 1, k = 1, run = 1;

            for(int j = i + 1; run && j < n; ++j) {
                if(vet[j] < temp[k - 1]) {
                    temp[k] = vet[j];
                    k++;
                    size_temp++;
                }
                else {
                    run = 0;
                }
            }

            if(size_seq < size_temp) {
                for(int m = 0; m < size_temp; ++m) {
                    seq[m] = temp[m];
                }
                size_seq = size_temp;
            }
        }

        if(size_seq == 1) {
            printf("0");
        }
        else {
            printf("%d\n", size_seq);
            for(int m = 0; m < size_seq; ++m) {
                printf("%d ", seq[m]);
            }
        }
        printf("\n");
    }

    return 0;
}
