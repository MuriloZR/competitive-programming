#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int fib[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711};//21

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int res = 0;
        for (int i = 20; i >= 0; i--) {
            if (n < fib[i]) {
                continue;
            }
            n -= fib[i];
            if(i>=1)res += fib[i-1];
        }
        cout << res << endl;
    }
}