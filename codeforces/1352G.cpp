#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;
 
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        if (n<4) {
            printf("-1\n");
            continue;
        }
 
        if (n == 4) {
            printf("3 1 4 2\n");
            continue;
        }
 
        if (n%2==0) {
            for (int i = 1; i <= n-1; i+=2){
                printf("%d ", i);
            }
            printf("%d ", n-4);
            printf("%d ", n);
            for (int i = n-2; i >=2; i-=2) {
                if (i == n-4) continue;
                printf("%d ", i);
            }
            printf("\n");
        }
        else {
            for (int i = 1; i <= n; i+=2){
                printf("%d ", i);
            }
            printf("%d ", n-3);
            printf("%d ", n-1);
            for (int i = n-5; i >=2; i-=2) {
                printf("%d ", i);
            }
            printf("\n");
        }
    }
}