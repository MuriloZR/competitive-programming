#include <bits/stdc++.h>

using namespace std;

int main() {
    int c, n;
    float p, res = 0;
    cin >> c >> n >> p;
    res += n*p;
    cin >> c >> n >> p;
    res += n*p;
    printf("VALOR A PAGAR: R$ %.2f\n", res);
}