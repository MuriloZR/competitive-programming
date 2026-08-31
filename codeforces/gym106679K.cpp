#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
//constexpr double PI{std::acos(-1)};
//constexpr int MOD{1e9+7};
#define levec(v) for (auto &i : v) std::cin >> i;
int t{};
void solve() {
    int n;
    cin >> n;
    vector<int> c(n), k(n);
    levec(c);
    levec(k);

    int sum = accumulate(c.begin(), c.end(), 0);
    int mn{INT_MAX};
    for (int i = 0; i < n; i++) {
        if (k[i] > c[i]) {
            cout << "-1\n";
            return;
        }
        if (c[i] - k[i] < mn)
            mn= c[i] - k[i];
    }
    cout << sum - mn << '\n';
}

void cases() {
    while (t--)
        solve();
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);
    //cases();
    solve();
}