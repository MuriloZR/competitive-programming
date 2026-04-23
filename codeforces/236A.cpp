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

    string s; cin >> s;
    set<char> sete;
    for (auto c : s) sete.insert(c);
    cout << (sete.size()%2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
}
