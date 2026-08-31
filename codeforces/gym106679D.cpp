#include <bits/stdc++.h>

using namespace std;
int n, m;

typedef long long ll;
typedef unsigned long long ull;
//constexpr double PI{std::acos(-1)};
//constexpr int MOD{1e9+7};

int t{};

void impmat(vector<vector<char>>&v) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
    cout << '\n';
}

int compara(vector<vector<char>>&v1, vector<vector<char>>&v2) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v1[i][j] != v2[i][j]) return 0;
        }
    }
    return 1;
}

int compara90(vector<vector<char>>&v1, vector<vector<char>>&v2) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v1[i][j] != v2[n-1-j][i]) return 0;
        }
    }
    return 1;
}

int compara180(vector<vector<char>>&v1, vector<vector<char>>&v2) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v1[i][j] != v2[n-1-i][m-1-j]) return 0;
        }
    }
    return 1;
}

int compara270(vector<vector<char>>&v1, vector<vector<char>>&v2) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v1[i][j] != v2[j][m-1-i]) return 0;
        }
    }
    return 1;
}



void solve() {
    cin >> n >> m;
    vector<vector<char>>v1(n, vector<char>(m));
    vector<vector<char>>ve(n, vector<char>(m));
    char num;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            v1[i][j] = num;
            ve[i][m-j-1] = num;
        }
    }

    int res{1};
    res += compara180(v1, v1);
    res += compara(v1, ve);
    res += compara180(v1, ve);

    if (n == m) {
        res += compara90(v1, v1);
        res += compara270(v1, v1);
        res += compara90(v1, ve);
        res += compara270(v1, ve);
    }
    cout << res << '\n';
}

void cases() {
    while (t--)
        solve();
}

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);
    //cases();
    solve();
}