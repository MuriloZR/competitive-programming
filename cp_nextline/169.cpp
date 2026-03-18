#include <bits/stdc++.h>

#define rv(v) for(auto& i : v) cin >> i
#define EPS 1e-9
#define MOD 1e9 + 7

using namespace std;
using ll = long long;

using cd = complex<double>;
const double PI = acos(-1);

void fft(vector<cd> & a, bool invert) {
    int n = a.size();
    if (n == 1)
        return;

    vector<cd> a0(n / 2), a1(n / 2);
    for (int i = 0; 2 * i < n; i++) {
        a0[i] = a[2*i];
        a1[i] = a[2*i+1];
    }
    fft(a0, invert);
    fft(a1, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    cd w(1), wn(cos(ang), sin(ang));
    for (int i = 0; 2 * i < n; i++) {
        a[i] = a0[i] + w * a1[i];
        a[i + n/2] = a0[i] - w * a1[i];
        if (invert) {
            a[i] /= 2;
            a[i + n/2] /= 2;
        }
        w *= wn;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rv(a);
    rv(b);

    reverse(a.begin(), a.end());
    a.resize(2*n);
    b.insert(b.end(), b.begin(), b.end());

    vector<cd> fa(a.begin(), a.end()), fb(b.begin(), b.end());
    ll t{1};
    while (t < a.size() + b.size()) t <<= 1;
    fa.resize(t);
    fb.resize(t);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < t; i++) fa[i] *= fb[i];
    fft(fa, true);

    vector<ll> c(t);
    for (int i = 0; i < t; i++) c[i] = llround(fa[i].real());

    for (int i = n-1; i <= 2*n-2; i++) {
        if (c[i] == 0) {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
}