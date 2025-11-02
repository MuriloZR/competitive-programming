#include <bits/stdc++.h>

int main() {
    int n;

    std::cin >> n;
    if (n != 1) {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n%i == 0) {
                printf("N\n");
                return 0;
            }
        }
        printf("Y\n");
        return 0;
    } else {
        printf("N\n");
        return 0;
    }
}