#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i
#define EPS 1e-9
#define MOD 1000000007
#define MODW 998244353

using namespace std;
using ll = long long;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    while (n--) {
        string s; cin >> s;
        int m; cin >> m;
        string res{""};
        for (auto i{s.begin()}; i != s.end(); i++) {
            res += *i - m >= 'A' ? *i - m : 'Z' - (m - (*i - 'A')) + 1;
        }
        cout << res << '\n';
    }
}
