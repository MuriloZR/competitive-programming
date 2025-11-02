#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> res;
    while (cin >> n) {
        long long sum = (n * (1 + n))/2;
        int v;
        for (int i = 1; i < n; i++) {
            cin >> v;
            sum -= v;
        }

        res.push_back(sum);
    }

    int tam = res.size();
    for (int i = 0; i < tam; i++) {
        printf("%d\n", res[i]);
    }
}