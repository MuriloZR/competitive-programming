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

    int n; cin >> n;
    if (n%2 == 0) {
        cout << (n*n)/2 << " casas brancas e " << (n*n)/2 << " casas pretas\n";
    }
    else {
        cout << (n*n)/2 + 1 << " casas brancas e " << (n*n)/2 << " casas pretas\n";
    }
}