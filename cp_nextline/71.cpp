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

    int c, g; cin >> c >> g;
    if (c == 1) cout << "vivo e morto\n";
    else if (c == 0 && g == 1) cout << "vivo\n";
    else if (c == 0 && g == 0) cout << "morto\n";
}
