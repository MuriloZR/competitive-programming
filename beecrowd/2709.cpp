#include <bits/stdc++.h>

#define rv(v)                                                                  \
  for (auto &i : v)                                                            \
  cin >> i
#define EPS 1e-9
#define MOD 1000000007
#define MODW 998244353

using namespace std;
using ll = long long;
using ull = unsigned long long;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n{1 << 14};
  vector<bool> is_prime(n+1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i * i <= n; i++) {
      if (is_prime[i]) {
          for (int j = i * i; j <= n; j += i)
              is_prime[j] = false;
      }
  }

  int m;
  while (cin >> m) {
    vector<ll> v(m);
    rv(v);

    cin >> n;
    ll res{};

    for (int i{m-1}; i >= 0; i -= n) {
      res += v[i];
    }

    if (is_prime[res]) {
        cout << "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
    }
    else {
        cout << "Bad boy! I’ll hit you.\n";
    }
  }
}
