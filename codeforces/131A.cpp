#include <bits/stdc++.h>
 
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
 
  std::string s;
  std::cin >> s;
  std::string res = s;
  int count{};
  if (std::isupper(s[0])) {
    for (int i = 1; i < s.size(); i++) {
      if (std::isupper(s[i])) count++;
    }
    if (count == s.size() - 1) {
      for (int i = 0; i < s.size(); i++) {
        res[i] = std::tolower(s[i]);
      }
      std::cout << res << '\n';
    }
    else {
      std::cout << s << '\n';
      return 0;
    }
  } else {
    res[0] = std::toupper(s[0]);
    for (int i = 1; i < s.size(); i++) {
      if (std::islower(s[i])) {
        std::cout << s << '\n';
        return 0;
      } 
      else {
        res[i] = std::tolower(s[i]);
      }
    }
    std::cout << res << '\n';
  }
}