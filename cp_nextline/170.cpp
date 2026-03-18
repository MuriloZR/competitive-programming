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

    string t, p;
    cin >> t >> p;

    int n = t.size();
    int m = p.size();

    ll tam{1};
    while (tam < n + m) tam <<= 1;

    vector<cd> fa(tam), fb(tam);
    for (int i = 0; i < n; i++) {
        double d = 2*PI*(t[i]-97)/26.0;
        fa[i] = cd(cos(d), sin(d));
    }
    
    int nw{}; //number of wildcards
    for (int i = 0; i < m; i++) {
        if (p[m-i-1] == '*') {
            fb[i] = 0;
            nw++;
        }
        else  {
            double d = 2*PI*(p[m-i-1]-97)/26.0;
            fb[i] = cd(cos(d), -sin(d));
        }
    }

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < tam; i++) fa[i] *= fb[i];
    fft(fa, true);

    ll out = 0;

    for(int i = 0; i + m <= n; i++) {
        if (fabs(fa[m - 1 + i].real() - (m - nw)) < 1e-3) {
            out++;
        }
    }
    cout << out << '\n';
}