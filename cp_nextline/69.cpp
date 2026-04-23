#include <iostream>
#include <unordered_map>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k, a, max = 0, min = 0;
    std::unordered_map<int, int> mapa; //chave <valor>
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        mapa[a] += 1;
    }
    for (auto& pair: mapa) {
        max += pair.second/k;
        min += pair.second%k;
    }
    max *= k;
    std::cout << max << " " << min << "\n";
}