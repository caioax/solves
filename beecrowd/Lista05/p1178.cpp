// problem: 1178 - Preenchimento de Vetor III

#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << fixed << setprecision(4);

    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << x << "\n";
        x /= 2;
    }

    return 0;
}
