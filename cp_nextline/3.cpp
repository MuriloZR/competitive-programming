#include <bits/stdc++.h>

using namespace std;

// Função para fazer (a^b) % m com expoente grande
long long mod_pow(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1)
            res = (__int128)res * a % m;
        a = (__int128)a * a % m;
        b >>= 1;
    }
    return res;
}

// Teste de Miller-Rabin para um único valor de base
bool miller_test(long long n, long long a, long long d, int s) {
    long long x = mod_pow(a, d, n);
    if (x == 1 || x == n - 1)
        return true;

    for (int r = 1; r < s; r++) {
        x = (__int128)x * x % n;
        if (x == n - 1)
            return true;
    }
    return false;
}

// Teste de Miller-Rabin principal
bool is_prime(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;

    // Escreve n - 1 como 2^s * d
    int s = 0;
    long long d = n - 1;
    while (d % 2 == 0) {
        d /= 2;
        ++s;
    }

    // Bases confiáveis para long long: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37
    // Isso garante exatidão para n < 2^64
    for (long long a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (a >= n) break;
        if (!miller_test(n, a, d, s))
            return false; // a "prova" que n é composto
    }

    return true; // provavelmente primo
}

int main() {
    long long n; cin >> n;
    cout << (is_prime(n)?"Y\n" : "N\n");
}