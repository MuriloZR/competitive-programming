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

    int p, r;
    cin >> p >> r;
    if (p == 0) {
        cout << "C\n";
    }
    else if (r == 0) {
        cout << "B\n";
    }
    else {
        cout << "A\n";
    }
}