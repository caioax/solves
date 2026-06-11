// problem: 1379 - Problema com Mediana e Média

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (!a && !b) return 0;

        int c = a * 3 - a - b;
        cout << c << "\n";
    }

    return 0;
}
