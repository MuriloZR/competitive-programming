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

    ll n, var{}; cin >> n;
    for (ll i = 1; i <= n; i++) {
        cout << ((i*i)*((i*i)-1))/2 - 8*var << '\n';
        var += i-1;
    }
}