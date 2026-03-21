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

    int t; cin >> t;
    while (t--)
    {
        ll y, x; cin >> y >> x;
        if (y > x) {
            if (y%2 == 0) cout << y*y -x + 1 << endl;
            else cout << (y-1)*(y-1) + x << endl;
        }
        else {
            if (x%2 == 0) cout << (x-1)*(x-1) + y << endl;
            else cout << x*x - y + 1 << endl;
        }
    }
}
