// problem: 1174 - Seleçao em Vetor I

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << fixed << setprecision(1);
    for (int i = 0; i < 100; i++) {
        double x;
        cin >> x;
        if (x <= 10) {
            cout << "A[" << i << "] = " << x << "\n";
        }
    }

    return 0;
}
