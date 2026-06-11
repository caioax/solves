// problem: 1743 - Máquina de Verificação Automatizada

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[5];
    for (int i = 0; i < 5; i++) {
        cin >> l[i];
    }

    for (int x : l) {
        int y;
        cin >> y;
        if (x == y) {
            cout << "N\n";
            return 0;
        }
    }
    cout << "Y\n";

    return 0;
}
