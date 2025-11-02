#include <bits/stdc++.h>

using namespace std;

vector<string> split(const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string str;

    while (getline(ss, str, delim)) {
        result.push_back (str);
    }

    return result;
}

int main() {
    int n;
    vector<vector<string>> strs;
    string s;
    
    cin >> n;
    cin.ignore();
    strs.resize(n);

    for (int i = 0; i < n; i++) {
        getline(cin, s);
        strs[i] = split(s, ' ');
    }

    for (int i = 0; i < n; i++) {
        stable_sort(strs[i].begin(), strs[i].end(), [](const string& a, const string& b) {
            return (a.size() > b.size());
        });
    }

    int qtd = strs.size();
    for (int i = 0; i < qtd; i++) {
        int num = strs[i].size();
        cout << strs[i][0];
        for (int j = 1; j < num; j++) {
            cout << ' ' << strs[i][j];
        }
        cout << endl;
    }
}