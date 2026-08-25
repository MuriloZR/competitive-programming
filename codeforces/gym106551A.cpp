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

    ll t, m, n;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        cout << (m%n==0?1:0) << '\n';
    }
}
