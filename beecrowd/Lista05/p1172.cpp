// problem: 1172 - Substituição em Vetor I

#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        int x;
        cin >> x;

        if (x < 1) x = 1;
        cout << "X[" << i << "] = " << x << "\n";
    }

    return 0;
}
