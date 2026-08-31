#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

std::string to_base3(unsigned int v) {
    if (v == 0) return "0";
    std::string out;
    while (v > 0) {
        out.push_back(static_cast<char>('0' + (v % 3)));
        v /= 3;
    }
    std::reverse(out.begin(), out.end());
    return out;
}

int base3_to_decimal(const std::string& s) {
    int res{};
    for (char c : s) {
        res = res * 3 + (c - '0');
    }
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::string s = to_base3(n);
    if (s[0] == '1') s[0] = '2';
    else if (s[0] == '2') {
        s[0] = '1';
        s+='0';
    }
    std::cout << base3_to_decimal(s) << '\n';
}
