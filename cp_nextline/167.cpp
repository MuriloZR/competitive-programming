#include <bits/stdc++.h>

#define rv(v) for(auto& i : v) cin >> i
#define EPS 1e-9
#define MOD 1e9 + 7

using namespace std;

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

    long long n; cin >> n;
    vector<long long> v(n);

    vector<bool> is_prime(2000000, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= 1999999; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= 1999999; i += p)
                is_prime[i] = false;
        }
    }
    
    long long m{}, out{};
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m = max(m, v[i]);
        if (is_prime[v[i]]) out--;
    }

    vector<cd> vfreq(m+1, 0);
    for (int i : v) vfreq[i] += 1;

    int t = 1;
    while (t < 2 * m + 2) t <<= 1;
    vfreq.resize(t);

    fft(vfreq, false);
    for (int i = 0; i < t; i++) vfreq[i] *= vfreq[i];
    fft(vfreq, true);


    for (int i = 0; i < t; i++) {
        if (i%2 == 0 && is_prime[i/2]) out += llround(vfreq[i].real());
    }

    out /=2;

    cout << out << '\n';
}