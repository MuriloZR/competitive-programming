#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string risada; std::cin >> risada;
    std::string vogais;
    for (char c : risada) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais +=c;
        }
    }
    std::string original = vogais;
    std::reverse(vogais.begin(), vogais.end());
    if (original == vogais) {
        std::cout << "S\n";
    } else {
        std::cout << "N\n";
    }

    return 0;
}