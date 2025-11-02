#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
    
    if (n <= 3 && n > 1) {
        printf("NO SOLUTION\n");
        return 0;
    }
    
    if (n%2 == 0) {
        for (int i = n-1; i >= 1; i-=2) {
            printf("%d ", i);
        }
        for (int i = n; i >= 2; i-=2) {
            printf("%d ", i);
        }
        printf("\n");
    }
 
    if (n%2 != 0) {
        for (int i = n; i >= 1; i-=2) {
            printf("%d ", i);
        }
        for (int i = n-1; i >= 2; i-=2) {
            printf("%d ", i);
        }
        printf("\n");
    }
 
}