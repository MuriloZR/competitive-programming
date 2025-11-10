#include <bits/stdc++.h>

using namespace std;

int qtd;

long long fib(int x) {
    qtd++;
    if (x == 0) return 0;
    if (x == 1) return 1;
    return fib(x-1) + fib(x-2);
}

int main() {
    int n; cin >> n;
    while (n--)
    {
        qtd = 0;
        int x; cin >> x;
        long long res = fib(x);
        cout << "fib(" << x << ")" << " = " << qtd-1 << " calls = " << res << endl;
    }
    
}