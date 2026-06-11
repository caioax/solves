// problem: 1113 - Crescente e Decrescente

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (a == b) return 0;

        if (a > b) {
            cout << "Decrescente" << endl;
            continue;
        }

        cout << "Crescente" << endl;
    }

    return 0;
}
