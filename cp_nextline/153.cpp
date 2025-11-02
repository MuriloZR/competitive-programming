#include <bits/stdc++.h>

#define EPS 1e-9
#define MOD 1e9 + 7

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    int s;
    while (t--) {
        s = 0;
        unsigned long long x, y, m;
        cin >> x >> y >> m;
        s = ((x%m) * (y%m))%m;
        int tamCiclo = m/gcd(x, m);
        cout << tamCiclo << ' ' << s << endl;
    }
}