#include <bits/stdc++.h>


using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> turma(m, vector<int> (n));
    int res = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> turma[j][i];
        }
    }


    for (int i = 0; i < m; i++) {
        res += *max_element(turma[i].begin(), turma[i].end());
    }


    cout << res << endl;
}
