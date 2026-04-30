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

    int n, k; cin >> n >> k;
    vector<int>  a(n);
    ll res{};
    auto it = a.begin() + k - 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; it != a.end(); i++, it++) {
        res += *max_element(a.begin() + i, it + 1);
    }

    cout << res << '\n';
}
