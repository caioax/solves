// problem: 1173 - Preenchimento de Vetor I

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    y = x;
    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << y << "\n";
        y <<= 1;
    }

    return 0;
}
