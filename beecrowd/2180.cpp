#include <bits/stdc++.h>

using namespace std;

using u64 = uint64_t;
using u128 = __uint128_t;

long long binpower(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(uint64_t n) { // returns true if n is prime, else returns false.
    if (n < 2)
        return false;

    int r = 0;
    uint64_t d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int cont{};
    vector<int> v;

    for (int i = n; cont < 10; i++) {
        if(MillerRabin(i)) {
            v.push_back(i);
            cont++;
        }
    }

    int speed = accumulate(v.begin(), v.end(), 0);
    int h = 60000000/speed;
    int days = h/24;

    cout << speed << " km/h\n";
    cout << h << " h / " << days << " d" << endl;
}