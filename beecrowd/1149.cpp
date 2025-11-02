#include <stdio.h>

int main() {
    int A, N, S = 0;

    scanf("%d", &A);

    while (A <= 0) {
        scanf("%d", &A);
    }

    scanf("%d", &N);

    while (N <= 0) {
        scanf("%d", &N);
    }

    for (int i = A; i < (A+N); i++) {
        S += i;
    }

    printf("%d\n", S);

    return 0;
}