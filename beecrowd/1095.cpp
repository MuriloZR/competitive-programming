#include <stdio.h>

int main() {

    int i = 1;
    for (int j = 60; j >= 0; j-=5) {

        printf("I=%d ", i);
        i+=3;
        printf("J=%d\n", j);
    }
}