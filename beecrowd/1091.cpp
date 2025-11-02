#include <iostream>
 
int main() {
    int k, n, m, x, y;
    do {
        std::cin >> k;
        std::cin >> n >> m;
        for (int i = 0; i < k; i++) {
            std::cin >> x >> y;
            if (x == n || y == m) {
                std::cout << "divisa" << std::endl;
            } else if (x > n && y > m) {
                std::cout << "NE" << std::endl;
            } else if (x < n && y > m) {
                std::cout << "NO" << std::endl;
            } else if (x < n && y < m) {
                std::cout << "SO" << std::endl;
            } else if (x > n && y < m) {
                std::cout << "SE" << std::endl;
            }
        }        
    } while (k != 0);
}