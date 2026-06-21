#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr double EPS {1e-9};
constexpr ll MOD {1'000'000'007};
constexpr ll MODW {998'244'353};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    stack<char> pilha;
    string meio{""}, res{""};

    vector<int> cont(26, 0);
    for (auto &c : s) {
        cont[c - 'A']++;
    }

    int impares = 0;
    for (auto &i : cont) {
        if (i%2 != 0) {
            impares++;
        }
    }
    if (impares > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for (int i = 0; i < 26; i++) {
        if (cont[i] == 0) continue;

        char atual = i + 'A';
        if (cont[i] % 2 == 0) {
            for (int j = 0; j < cont[i] / 2; j++) {
                res += atual;
                pilha.push(atual);
            }
        }
        else {
            for (int j = 0; j < cont[i]; j++) {
                meio += atual;
            }
        }
    }

    res += meio;

    while (!pilha.empty()) {
        res += pilha.top();
        pilha.pop();
    }

    cout << res << '\n';
}