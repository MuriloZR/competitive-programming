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

    int n, k; cin >> n >> k;
    vector<int> v(n);
    rv(v);
    ll res{};
    int l{1}, h{*max_element(v.begin(), v.end())};
    while (l <= h) {
        ll sum{};
        int mid{(l+h)/2};
        for (auto i : v) {
            sum += i/mid;
        }

        if (sum >= k) {
            res = mid;
            l = mid + 1;
        }
        else h = mid-1;
    }

    cout << res << '\n';
}