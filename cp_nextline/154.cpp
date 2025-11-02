#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll mulpow(ll a, ll b, ll mod) {
    ll res = 0;
    while (b > 0) {
        if (b & 1)
            res = (res + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return res;
}

// Fast pow and mod
ll powmod(ll base, ll exp, ll modulus) {
    base %= modulus;
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = mulpow(result, base, modulus);
        base = mulpow(base ,base , modulus);
        exp >>= 1;
    }
    return result;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        long long x, p, m;
        cin >> x >> p >> m;
        long long r = 0;
        unordered_map<int, int> mapa;
        long long tamCiclo, vIni;
        long long i{}, acc{1}, rabicho{};
        mapa[1] = 0;
        while (true)
        {
            i++;
            acc *= x;
            acc %= m;
            if (mapa.count(acc)) {
                tamCiclo = i - mapa[acc];
                vIni = acc;
                rabicho = mapa[acc];
                break;
            }
            mapa[acc] = i;
        }
        if (p-rabicho < 0) {

        }
        else {
            p = (p-rabicho) % tamCiclo + rabicho;
        }
        r = powmod(x, p, m);

        cout << vIni << ' ' << tamCiclo << ' ' << r << endl;
    }
    
}