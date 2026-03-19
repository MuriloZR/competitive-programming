#include <bits/stdc++.h>

#define rv(v) for(auto& i : v) cin >> i
#define EPS 1e-9
#define MOD 1e9 + 7
#define MODW 998244353

using namespace std;
using ll = long long;

vector<ll> arr;
vector<vector<ll>> dp;
ll res;

ll solve(int e, int i) {
    if (e <= 0 || i < 0) return 0;

    return max(solve(e-1, i-2) + arr[i], solve(e, i-1));
}

void printa_matriz() {
    for (int i = 0; i < dp.size(); i++) {
        for (int j = 0; j < dp[i].size(); j++) {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; cin >> n >> k;
    arr.resize(n);
    dp.resize(n, vector<ll>(k+1, 0));
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        res += arr[i];
    }

    dp[0][0] = 0;
    dp[0][1] = arr[0];

    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= k; j++) {
            // não pegar arr[i]
            dp[i][j] = dp[i-1][j];

            // pegar arr[i] (se puder)
            if (j >= 1 && i >= 1) {
                dp[i][j] = max(dp[i][j], (i>=2 ? dp[i-2][j-1] : 0) + arr[i]);
            }
        }
    }

    // cout << "res: " << res << endl;

    // cout << "matriz: \n";
    // printa_matriz();

    // cout << "solve: " << solve(k, n-1) << endl;

    // cout << (res - solve(k, n-1)) << endl;
    cout << res - dp[n-1][k] << endl;
}
