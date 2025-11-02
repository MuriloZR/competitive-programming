#include <bits/stdc++.h>
using namespace std;
 
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  
  int n;
  std::cin >> n;
  std::map<std::string, int> mapa;
  using pair_type = decltype(mapa)::value_type;
 
  while (n--) {
    std::string s;
    std::cin >> s;
    mapa[s]++;
  }
  auto pr =
      std::max_element(std::begin(mapa), std::end(mapa),
                       [](const pair_type &p1, const pair_type &p2) {
                         return p1.second < p2.second;
                       });
 
  std::cout << pr->first << '\n';
}