#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// isso aqui é bizarro
void solve3() {
    auto to_base3 = [](unsigned int v) -> string {
        if (v == 0) return "0";
        std::string out;
        while (v > 0) {
            out.push_back(static_cast<char>('0' + (v % 3)));
            v /= 3;
        }
        std::reverse(out.begin(), out.end());
        return out;
    };

    auto base3_to_decimal = [](const std::string& s) {
        int res{};
        for (char c : s) {
            res = res * 3 + (c - '0');
        }
        return res;
    };

    int n;
    std::cin >> n;
    std::string s = to_base3(n);
    if (s[0] == '1') s[0] = '2';
    else if (s[0] == '2') {
        s[0] = '1';
        s+='0';
    }
    std::cout << base3_to_decimal(s) << '\n';
}

// essa faz sentido
void solve2() {
    int n; cin >> n;
    int pot{1};
    while (pot*3 <= n) pot *=3;
    cout << (n <= 2*pot ? 2*pot + (n-pot) : pot*3 + 3*(n - 2*pot)) << endl;
}

// essa tbm
void solve1() {
    const int MAXN {10'000'010};
    int n; vector<int> f(MAXN, 0), inv(MAXN, 0);
    cin >> n;
    f[1] = 2; inv[2] = 1;
    for (int i {2}; i <= n; i++) {
        if (inv[i]) f[i] = 3*inv[i];
        else        f[i] = f[i-1]+1;

        if (f[i] <= n) inv[f[i]] = i;
    }
    cout << f[n] << endl;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);

    solve1();
//    solve2();
//    solve3();
}
