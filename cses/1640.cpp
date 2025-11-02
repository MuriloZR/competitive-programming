#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, x;
    map<int, int> m;
 
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        
        if (m.count(x - v)) {
            printf("%d %d\n", i+1, m[x - v]+1);
            return 0;
        }
        
        m[v] = i;
    }
 
    printf("IMPOSSIBLE\n");
}