#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m)
    {
        if (m == 0 && n == 0) return 0;
        vector<vector<int>> terreno(n, vector<int> (m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> terreno[i][j];
            }
        }

        int q; cin >> q;
        vector<pair<int, int>> lu(q);
        for (int i = 0; i < q; i++) {
            cin >> lu[i].first >> lu[i].second;
        }

        for (auto p : lu) {
            int lado = 0;
            for (int i = 0; i < n; i++) {
                auto it = lower_bound(terreno[i].begin(), terreno[i].end(), p.first);
                if (*it <= p.second) {
                    int j = distance(terreno[i].begin(), it);
                    while (i+lado < n && j+lado < m && terreno[i+lado][j+lado] >= p.first && terreno[i+lado][j+lado] <= p.second)
                    {
                        lado++;
                    }
                }
            }

            cout << lado << '\n';
        }
        cout << '-' << endl;
    }
}