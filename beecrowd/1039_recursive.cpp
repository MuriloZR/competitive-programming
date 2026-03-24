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

    ll r1, x1, y1, r2, x2, y2, a;
    cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2 ? cout << (r1 >= sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) + r2 ? "RICO\n" : "MORTO\n"), main() : 0;
}
