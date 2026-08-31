#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
//constexpr double PI{std::acos(-1)};
//constexpr int MOD{1e9+7};
#define levec(v) for (auto &i : v) std::cin >> i;


int t{};
void solve() {
    int t, c, k;
    cin >> t >> c >> k;

    int res{};
    res = min(c, t*k);
    cout << res << '\n';
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