#include <bits/stdc++.h>
 
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
 
  std::string s;
  std::cin >> s;
  std::string hello = "hello";
  
  int j{};
  
  for (int i = 0; i < s.size(); i++) {
    if (j == hello.size()) break;
    if (s[i] == hello[j]) j++;
  }
  if (j == hello.size()) std::cout << "YES\n";
  else {
    std::cout << "NO\n";
  }
}