#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
//constexpr double PI{std::acos(-1)};
//constexpr int MOD{1e9+7};

int t{};
void solve() {
    int n, q;
    cin >> n;
    vector<int> C(n, 0), V(n, 0);
    for (int i = 0; i < n; i++) {
        // le o vetor de pair
        int ci, vi;
        cin >> ci >> vi;
        C[i] += ci + (i > 0 ? C[i-1] : 0);
        V[i] += vi + (i > 0 ? V[i-1] : 0);
    }

    cin >> q;
    while (q--) {
        int b;
        cin >> b;
        b--;
        double i {static_cast<double>(C[b] - V[b])/static_cast<double>(C[b] + V[b])};
        if (i > 0.0) cout << "COMPRA\n";
        else if (i < 0.0) cout << "VENDA\n";
        else cout << "NEUTRO\n";
    }
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