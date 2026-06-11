// problem: 2414 - Desafio do Maior Número

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m = 0;
    while (cin >> n && n) {
        m = max(m, n);
    }
    cout << m << "\n";

    return 0;
}
