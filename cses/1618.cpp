#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr double EPS {1e-9};
constexpr ll MOD {1'000'000'007};
constexpr ll MODW {998'244'353};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, res{}; cin >> n;
    // fómula de legendre
    while (n >= 5) {
        n /= 5;
        res += n;
    }

    cout << res << '\n';
}