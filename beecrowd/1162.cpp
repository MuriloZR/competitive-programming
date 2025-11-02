#include <stdio.h>
#include <stdlib.h>

int conta_trocas(int array[], int a) {
    int nSwaps = 0;
    for (int i = 0; i < a - 1; i++ ) {
        for (int j = 0; j < a - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                nSwaps++;
            }
        }
    }
    return nSwaps;
}

int main() {
    int nTests, nCarriages;
    


    scanf("%d", &nTests);

    
    for (int i = 0; i < nTests; i++) {
        scanf("%d", &nCarriages);
        int carriage[nCarriages];

        for (int j = 0; j < nCarriages; j++) {
            scanf("%d", &carriage[j]);
        }

        int nSwaps = conta_trocas(carriage, nCarriages);

        printf("Optimal train swapping takes %d swaps.\n", nSwaps);
        nSwaps = 0;
        
    }

    return 0;
}