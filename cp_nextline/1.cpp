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
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        rv(v);

        long long sum = 0;
        int res = 0;
        int l = 0;

        for (int r = 0; r < n; r++) {
            sum += v[r];
            while (l <= r && sum > k) {
                sum -= v[l];
                l++;
            }
            res = max(res, r - l + 1);
        }

        cout << res << "\n";
    }
}