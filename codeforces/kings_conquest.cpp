#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long ull;

const int MOD{1000000007};

#define levec(v)                                                               \
  for (auto &i : v)                                                            \
  std::cin >> i
#define prllvec(v, n)                                                         \
  for (ll i = 0; i < n; i++) {                                                \
    if (i)                                                                     \
      std::cout << ' ';                                                        \
    std::cout << v[i];                                                         \
  };
#define endl '\n'

std::vector<std::pair<ll, ll>>v;
ll xmin{LLONG_MAX}, xmax{LLONG_MIN}, ymin{LLONG_MAX}, ymax{LLONG_MIN};

ll solve(ll x, ll y) {
  return (std::max(xmax, x) - std::min(xmin, x) + 1) * (std::max(ymax,y) - std::min(ymin, y) + 1);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  ll n, k;
  std::cin >> n >> k;
  if (n == 1){
    std::cout << 1 << '\n';
    return 0;
  }
  ll x, y;
  for (ll i = 0; i < n; i++) {
    std::cin >> x >> y;
    v.push_back({x, y});
    xmin = std::min(xmin, x);
    ymin = std::min(ymin, y);
    xmax = std::max(xmax, x);
    ymax = std::max(ymax, y);
  }

  ll res{};

  for (auto [x, y] : v) {
    res = std::max(res, solve(x + k, y + k));
    res = std::max(res, solve(x + k, y - k));
    res = std::max(res, solve(x - k, y + k));
    res = std::max(res, solve(x - k, y - k));
  }

  ll diffx = xmax - xmin + 1;
  ll diffy = ymax - ymin + 1;

  for (ll i = 0; i <= k; i++) {
    res = std::max(res, (diffx+i)*(diffy + k - i));
  }

  std::cout << res << '\n';
}
