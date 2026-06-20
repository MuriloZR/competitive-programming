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

    ll n; cin >> n;
    if (n%4 == 1 || n%4 == 2) cout << "NO\n";
    else {
        cout << "YES\n";
        if (n & 1) {
            vector<int> v1(n/2 + 1), v2(n/2);
            v1[0] = 1; v1[1] = 2; v2[0] = 3;
            int j{2}, k{1};
            for (int i = 4; i < n; i+=2, j+=2, k+=2, n-=2) {
                v1[j] = i;
                v1[j+1] = n;
                v2[k] = i+1;
                v2[k+1] = n-1;
            }

            cout << v1.size() << '\n';
            for (auto &i : v1) cout << i << ' ';
            cout << '\n' << v2.size() << '\n';
            for (auto &i : v2) cout << i << ' ';
            cout << '\n';
        }
        else {
            vector<int> v1(n/2), v2(n/2);
            int j{};
            for (int i = 1; i < n; i+=2, j+=2, n-=2) {
                v1[j] = i;
                v1[j+1] = n;
                v2[j] = i+1;
                v2[j+1] = n-1;
            }

            cout << v1.size() << '\n';
            for (auto &i : v1) cout << i << ' ';
            cout << '\n' << v2.size() << '\n';
            for (auto &i : v2) cout << i << ' ';
            cout << '\n';
        }
    }
}