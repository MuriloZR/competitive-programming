#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr double EPS {1e-9};
constexpr ll MOD {1000000007};
constexpr ll MODW {998244353};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> m;
    for (auto &c : s) if (c != '+') m[c]++;

    for (auto it{m.begin()}; it != m.end(); it++) {
        auto [first, second] {*it};
        for (int i{}; i < second; i++) {
            cout << first << (distance(it, m.end()) == 1 && i == second-1 ? '\n' : '+');
        }
    }
}
