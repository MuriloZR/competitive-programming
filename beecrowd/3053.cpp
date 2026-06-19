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

    int n, m; cin >> n;
    char c; cin >> c;
    while (n--) {
        cin >> m;
        if (m == 1) {
            if (c == 'A') c = 'B';
            else if (c == 'B') c = 'A';
        }
        else if (m == 2) {
            if (c == 'B') c = 'C';
            else if (c == 'C') c = 'B';
        }
        else {
            if (c == 'A') c = 'C';
            else if (c == 'C') c = 'A';
        }
    }

    cout << c << '\n';
}