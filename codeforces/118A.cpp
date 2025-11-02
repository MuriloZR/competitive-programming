#include <bits/stdc++.h>
 
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
 
  std::string s;
  std::cin >> s;
  
  std::string res;
  for (char c : s) {
    char i = std::tolower(c);
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y') {}
    else {
      res += '.';
      res += i;
    }
  }
  std::cout << res << '\n';
}