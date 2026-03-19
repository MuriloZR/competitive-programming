#include <bits/stdc++.h>

#define rv(v) for(auto& i : v) cin >> i
#define EPS 1e-9
#define MOD 1e9 + 7
#define MODW 998244353

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, out{}; cin >> n;
    map<int, int> m;
    int aux;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        m[aux]++;
    }

    for (int i = 1; i < 1'000'000'000; i++) {
        if (!m.count(i)) {
            cout << i << '\n';
            return 0;
        }
    }
}