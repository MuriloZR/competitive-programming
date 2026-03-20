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

    int n; cin >> n;
    vector<int> v(n);
    rv(v);

    vector<int> tails;
    for (int i : v) {
        auto it = lower_bound(tails.begin(), tails.end(), i);
        if (it == tails.end()) tails.push_back(i);
        else *it = i;
    }

    cout << tails.size() << endl;
}
