#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr double EPS {1e-9};
constexpr ll MOD {1000000007};
constexpr ll MODW {998244353};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, res{1}; cin >> n;
    for (int i = 0; i < n; i++) {
        res = ((res % MOD) * 2) % MOD;
    }

    cout << res << '\n';
}